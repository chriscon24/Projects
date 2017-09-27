#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[]){
        int n, n2, size;
        unsigned short conv_n, conv_n2;
        string number;      
        
        cout << "Please Enter a number and I will display it " << endl; 
        cout << "in reverse order: ";  
        cin >> number; 
        
        size = number.size();
        char character[size], reversed[size];
        for(int i = 0; i <= size; i++)
                character[i] = number[i];
        n2 = atoi(character);
        for (int i = 0; i < size; i++){
            for(int j = size; j > 0; j--)
                character[i] = number[j - 1]; 
        } 
        n = atoi(reversed);
        conv_n = static_cast<unsigned short>(n2);
        int reduce1;  
        reduce1 = conv_n/10000;  
        conv_n = conv_n - (reduce1*10000);
        
        int reduce2;  
        reduce2 = conv_n/1000;
        conv_n = conv_n - (reduce2*1000);
        
        int reduce3; 
        reduce3 = conv_n/100;
        conv_n = conv_n - (reduce3*100);
        
        int reduce4; 
        reduce4 = conv_n/10;
        conv_n = conv_n - (reduce4*10);
        
        int reduce5; 
        reduce5 = conv_n/1; 
        conv_n = conv_n - (reduce5*1);
        
        conv_n2 = (reduce1*1) + (reduce2*10) + (reduce3*100) + (reduce4*1000) + (reduce5*10000);
         
        if((n == conv_n2)&&(conv_n2 <= 65534))
            cout << endl << "The number in reverse is: " << conv_n2 << endl;
        else
            cout << "This number is too big" << endl;    
                   
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
