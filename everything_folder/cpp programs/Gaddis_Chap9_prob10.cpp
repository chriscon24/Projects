#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){  
    int array[7] = {1, 2, 3, 4, 5, 6, 7}; 
    int *copy = array;
    
    cout << "\nThe numbers in their original" 
         << "\norder are: " << *copy << " "; 
    while (copy < &array[6]){
          copy++; 
          cout << *copy << " "; 
    } 
    cout << endl << "\nThe numbers in reverse"
         << "\norder are: " << *copy << " ";
    while (copy > array){
          copy--; 
          cout << *copy << " "; 
    }    
    cout << endl;  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
