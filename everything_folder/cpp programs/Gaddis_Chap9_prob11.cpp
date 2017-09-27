/*
  Christian Conable
  Gaddis Chapter 9 problem 11
  03/14/2014
*/

#include <iostream>
using namespace std;

int* expander(int*, int);

int main(){
	const int SIZE = 7;											
	int array [SIZE] = {1, 2, 3, 4, 5, 6, 7};				
	int* point = array;													

    cout << "\nHere is the original array: "; 
	for(int i = 0;i < SIZE; i++)
		cout << point[i] << " ";
    cout << endl; 
	

	point = expander(array, SIZE);	
    
    cout << "\nAnd here is the copied array: "; 
	for(int i = 0; i < SIZE; i++)
		cout << point[i] << " ";
	cout << endl; 

	delete[] point;	
	point = 0;	
 
    system("pause"); 
	return 0;
}

int* expander(int* a, int n){
    int* expand = new int[n * 2];
    for (int i = 0; i < n*2; i++){
        if (i < n)
            expand[i] = a[i];
        else
            expand[i] = 0;
    }
    return expand;
}
