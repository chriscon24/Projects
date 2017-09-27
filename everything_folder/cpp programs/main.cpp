#include <iostream>
using namespace std; 



int main(int argc, char *argv[]){ 
    int number[hundred]; //number[hundred]
    
    for (i = 0; i <= hundred - 1; i++)
        cout << " " << number[i] << " ";
    cout << endl;  
        
    system ("pause"); 
    return 0; 
}
void bubblesort(int number[]){
    int i, j; 
    for (i = 0; i <= hundred - 2; i++){
        for (j = i + 1; j <= hundred - 1; j++){
            int temp; 
            if (number[i] > number[j]){
               temp = number[i]; 
               number[i] = number[j]; 
               number[j] = temp; 
            }
        }
    }
}

    
