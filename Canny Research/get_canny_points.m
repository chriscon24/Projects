function [ p] = get_canny_points( static,margin )

can = edge(static,'canny');
imagesc(can);
drawnow;
% can = edge(static,'canny',[0.04, .1]);
[L,ne] = bwlabel(can);
thresh =20;
for  i = 1:ne
     temp = L;
 temp=    temp(temp==i);
 if size(temp,1)<thresh
     L(L==i) = 0;
 end
end
L(L>0) = 1;
% margin = 10;
L(1:margin,:) = 0;
L(:,1:margin) = 0;
L(:,end-margin-1:end) = 0;
L(end-margin-1:end,:) = 0;
[p(:,1),p(:,2)] = find(L);
end

