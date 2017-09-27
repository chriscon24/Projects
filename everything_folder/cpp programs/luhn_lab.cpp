/*  
    Christian Conable
    Luhn Algorithm
*/

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void random (char [], int); 
void two_times(char [], int);  

int main(int argc, char *argv[]){
    srand(static_cast<unsigned int>(time(0)));
    
    const int SIZE = 10; 
    char array[SIZE], choice; 
    
    do {
        random(array, SIZE); 
        cout << endl << array << endl;
        
        cout << "-----------";  
        
        two_times(array, SIZE); 
        cout << endl << array << endl;
        
        cout << endl << "Again: " << endl; 
        cin >> choice; 
    }while (choice == 'y' || choice == 'Y');  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void random (char a[], int n){
     for (int i = 0; i < n + 1; i++)
        a[i] = rand() % 10 + 48;    
}
void two_times(char a[], int n){
     int sum = 0; 
     for (int i = 0; i < n + 1; i++){
         if (i % 2 == 0){
            a[i] *= 2; 
            if(a[i] < 106){
               a[i] -= 48; 
               sum += a[i];
            } 
            else {
               a[i] -= 57;
               sum += a[i];
            }   
         }
     }      
}

         
               
