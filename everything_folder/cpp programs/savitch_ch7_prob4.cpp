/*
  Christian Conable
  03/07/2014
  Savitch Chapter 7 problem 4
*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void fill_array(int [], int, int&); 
float deviate(int[], int); 

int main(int argc, char *argv[]){
    const int SIZE = 15; 
    int array[SIZE], used;
    float standard, final;   
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2); 
    char choice; 
    
    do{
         
        cout << endl << "Enter up to " << SIZE << " whole numbers and " << endl; 
        cout << "end the sequence with a negative number." << endl; 
        
        fill_array(array, SIZE, used);
        standard = deviate (array, used);
        
        final = sqrt(standard); 
        cout << "Standard Deviation = " << final << "." << endl;
        
        cout << endl << "Again? (y/n): "; 
        cin >> choice; 
        
        if (choice == 'N' || choice == 'n')
           cout << endl << "okay see ya." << endl;   
    }while (choice == 'Y' || choice == 'y'); 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void fill_array(int a[], int n, int& used){
     int next, i = 0; 
     cin >> next; 
     while ((next >= 0) && (i < n)){
           a[i] = next; 
           i++; 
           cin >> next; 
     }
     used = i; 
}
float deviate(int a[], int used){
      float total = 0.0e0f; 
      for (int i = 0; i < used; i++)
          total += a[i];
      if (used > 0.0e0f){
          float mean = total/used, temp, add, power;  
          for (int i = 0; i < used; i++){
              temp = a[i] - mean; 
              add += temp*temp;
          }   
          return (add/used);
      }
      else {
           cout << "Invalid Entry." << endl; 
           return 0; 
      }
} 

