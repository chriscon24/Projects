/*
  Christian Conable
  Gaddis Chapter 9 problem 12
  03/14/2014
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int* shifter(int*, int); 

int main(int argc, char *argv[]){
    const int SIZE = 7;											
	int array [SIZE] = {1, 2, 3, 4, 5, 6, 7};				
	int* point = array;	
	
	cout << "\nHere is the original array: "; 
	for(int i = 0;i < SIZE; i++)
		cout << point[i] << " ";
    cout << endl; 
    
    point = shifter(array, SIZE);
    
    cout << "\nAnd here is the shifted array: "; 
	for(int i = 0; i < SIZE; i++)
		cout << point[i] << " ";
	cout << endl; 
	
	delete[] point;	
	point = 0;
	
    system("PAUSE");
    return EXIT_SUCCESS;
}
int* shifter(int* a, int n){
     int* shift = new int[n + 1];
     shift[0] = 0; 
     for (int i = 1; i <= n; i++)
         shift[i] = a[i - 1]; 
     return shift; 
}
     
