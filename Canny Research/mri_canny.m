clear all
clc
close all

yyyct = 'C:\UCSF\Atchar\ForStudents\ImagingData\Subject_Liver01\7';
addpath(yyyct);
filesct = dir([yyyct, '\E*']); 

NCT = length(filesct);  


 for i  =1 : NCT;
fname = filesct(i, 1).name;
infoc = dicominfo(fname);
sn =infoc.InstanceNumber;

image = dicomread(fname);
image = double(image);
CB(:,:,sn) =image(:,:);

if isequal(sn,NCT);
    position = infoc.ImagePositionPatient;
elseif isequal(sn,1);
   position2nd = infoc.ImagePositionPatient; 
else
end  


dimensions_x_y = infoc.PixelSpacing;
dimensions_z = infoc.SliceThickness;
dimCB(1:2)=dimensions_x_y;
dimCB(3) = dimensions_z; 
 end
%%
% subplot(1,2,1)
% imagesc(CB(:,:,32));
% subplot(1,2,2)
% imagesc(CB(:,:,17));

for i=17:32
   imagesc( CB(:,:,i));
   drawnow
end

clc
clear sd
 imagesc( CB(:,:,17));
moving = CB(:,:,32);
%%
clc
static = CB(:,:,17);
% static = -static+max(static(:));
static = imresize(static,1,'bilinear');
% myfilter = fspecial('gaussian',[3 3], 0.5);
% static = imfilter(static, myfilter, 'replicate');
% statici = -static+max(static(:));
% can = edge(static,'canny');
can = edge(static,'canny',[0.04, .1]);
[L,ne] = bwlabel(can);
% Lnew  = L;
thresh =20;
for  i = 1:ne
     temp = L;
 temp=    temp(temp==i);
 if size(temp,1)<thresh
     L(L==i) = 0;
 end
end
L(L>0) = 1;
margin = 10;
L(1:margin,:) = 0;
L(:,1:margin) = 0;
L(:,end-margin-1:end) = 0;
L(end-margin-1:end,:) = 0;

clear p

[p(:,1),p(:,2)] = find(L);


% subplot(1,2,1)
% imagesc(L);
% subplot(1,2,2)
imagesc(static);
hold on
plot(p(:,2),p(:,1),'.g');
%%
clc
clearvars -except CB p
moving = CB(:,:,32);
static = CB(:,:,17);

sz = size(static);

window_size = 5;
def(:,:,1) = moving;
dfp = zeros(size(p,1),2);
for q = 1:5
    moving = def(:,:,q);
    [gstaticx,gstaticy]  = gradient(static);
    [gmovingx, gmovingy] = gradient(moving);
    
    for point =1:size(p,1)
        js = 1;
        ji = (js-1)*2+3;
        solutionspace = zeros(ji,ji);
        windows =[p(point,1)-window_size:p(point,1)+window_size;...
            p(point,2)-window_size:p(point,2)+window_size];
        for x = 1:ji
            for y = 1:ji
                windowm =[p(point,1)-js+x-window_size-1:p(point,1)-js+x+window_size-1;...
                    p(point,2)-js+y-window_size-1:p(point,2)-js+y+window_size-1];
                
                
                energy_static =   (static(windows(1,:),windows(2,:))-moving(windowm(1,:),windowm(2,:))).^2;
                energy_gstaticx = (gstaticx(windows(1,:),windows(2,:))-gmovingx(windowm(1,:),windowm(2,:))).^2;
                energy_gstaticy = (gstaticy(windows(1,:),windows(2,:))-gmovingy(windowm(1,:),windowm(2,:))).^2;
                energy_static = sum(energy_static(:));
                energy_gstaticx = sum(energy_gstaticx(:));
                energy_gstaticy = sum(energy_gstaticy(:));
                energy = energy_static+energy_gstaticx+energy_gstaticy;
                solutionspace(x,y) = energy;                
            end
        end
                 [v] = min(solutionspace(:));
                solutionspace(solutionspace>v) = 0;
                [mx my] = find(solutionspace);
                tempxo = mx -js-1;
                tempyo = my -js-1;
        dfp(point,1) = tempxo;
        dfp(point,2) = tempyo;
        
    end   

% imagesc(solutionspace);


    dvf = zeros(sz(1),sz(2),2,'single');
    for k = 1:2
        test= scatteredInterpolant(p(:,1),p(:,2),dfp(:,k));
        test.ExtrapolationMethod = 'none';
        if k<2
            tx = 1:size(static,1);ty = 1:size(static,2);[xg,yg]=meshgrid(tx,ty);
        end
        vqo = test(xg,yg);
        vqo = vqo';
        vqo(isnan(vqo)) = 0;
        myfilter = fspecial('gaussian',[3 3], 0.5);
        vqo = imfilter(vqo, myfilter, 'replicate');
%         myfilter = fspecial('disk',2);
%         vqo= imfilter(vqo, myfilter, 'replicate');
        dvf(:,:,k) = vqo;
    end



% subplot(1,2,1)
% imagesc(dvf(:,:,1));
% subplot(1,2,2)
% imagesc(dvf(:,:,2));
    if q>1
        temp = zeros(size(dvf));
        for j = 1:2
            temp(:,:,j)= move2dimage2(dvf(:,:,j),-dvf(:,:,1),-dvf(:,:,2));
        end
        dvfs(:,:,:,q) = temp+dvfs(:,:,:,q-1);
    else
        dvfs(:,:,:,q) = dvf;
    end
% dvfs =dvf;
def(:,:,q+1) = move2dimage2(moving,-dvfs(:,:,1,q),-dvfs(:,:,2,q));

if q==1
   f = sum(abs(static - def(:,:,q)));
    fs(q) = sum(f(:)); 
end

f = sum(abs(static - def(:,:,q+1)));
    fs(q+1) = sum(f(:));
end
subplot(1,2,1)
imagesc(def(:,:,2)-static);
subplot(1,2,2)
imagesc(def(:,:,1)-static);

plot(fs)
%%
subplot(1,2,1)
imagesc(def(:,:,2)-static,[-1000,1000]);
subplot(1,2,2)
imagesc(def(:,:,1)-static,[-1000,1000]);
%%
subplot(1,3,1)
imagesc(def(:,:,2));
% imagesc(static);
subplot(1,3,2)
imagesc(def(:,:,1));
subplot(1,3,3)
imagesc(static);
%%
for i = 17:32
imagesc(CB(:,:,i))
drawnow
end