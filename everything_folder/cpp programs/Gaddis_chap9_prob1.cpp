/*
  Christian Conable
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int *new_num; 
    int number;   
    cout << "Enter a number and I will " 
         << "\ndynamically allocate them" 
         << "\nusing pointers. " << endl; 
    cin >> number;
    new_num = new int [number]; 
    for (int i = 0; i < number; i++){
        cout << "number " << (i + 1) << ":"; 
        cin >> new_num[i]; 
    }
    int total = 0, average; 
    for (int i = 0; i < number; i++)
        total += new_num[i]; 
    average = total/number; 
    
    cout << "Average = " << average << "." << endl; 
         
    delete [] new_num; 
    new_num = 0;   
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

     
