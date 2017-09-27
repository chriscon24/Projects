/*
  Christian Conable
  Assignment 1
  02/19/2014
*/

#include <iostream>
using namespace std;

const int hundred = 100; 

void fillarray(int[]);
void printArray(int[]);
void bubblesort(int[]);
void binarysort(int[]);  
void printarray(int[]);

int main(int argc, char *argv[]){ 
    int number[hundred];
    char choice; 
    do {
        cout << "this program will take a set of 100, two digit random numbers" << endl; 
        cout << "and sort them using the bubble sort algorithm. It will then use" << endl;
        cout << "binary search to determine if the set contains the number 50." << endl; 
        cout << endl << endl; 
        
        fillarray(number);
        printArray(number); 
        bubblesort(number);  
        printarray(number); 
        binarysort(number);
     
        cout << endl;
        
        cout << "Would you like to try another set? press y for " << endl; 
        cout << "yes or n for no." << endl;
        cin >> choice;  
        cout << endl; 
        
        if (choice == 'n' || choice == 'N')
            cout << "Ok see ya." << endl; 
            
    } while (choice == 'y' || choice == 'Y'); 
    system("PAUSE");
    return EXIT_SUCCESS;
}
void fillarray(int number[]){
     srand (time(NULL));
     for (int count = 0; count <= hundred; count++)
        number[count] = rand() % 100; 
}
void printArray(int number[]){
     cout << "Here are the set of random numbers " << endl; 
     cout << "before the bubble sort: " << endl << endl; 
     for (int count = 0; count <= hundred; count++){
        cout << number[count];
        cout << " ";
     }
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
void printarray(int number[]){
     cout << endl << endl; 
     cout << "Here are the numbers " << endl; 
     cout << "after the bubble sort: " << endl << endl;
     for (int count = 0; count <= hundred; count++){
        cout << number[count];
        cout << " ";
     }
}
void binarysort(int number[]){
    int answer = 50;  
    int low, high, current, search; 
    while (answer != -1){
        low = 0; 
        high = hundred - 1; 
        while (low < high){
            current = (low + high)/2; 
            if (answer > number[current])
                low = current + 1; 
            else if (answer < number[current])
                high = current - 1; 
            else 
                break; 
       }
       cout << endl; 
       if (number[current] == answer)
            cout << endl << "The number 50 was found at position " << current << "." << endl; 
       else
            cout << endl << "The number 50 was not found in this set." << endl; 
            break; 
    }
}
