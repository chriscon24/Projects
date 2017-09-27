/*
  Christian Conable
*/

#include <iostream>
using namespace std;

void sort(int *, int);
void showArray(int [], int);

int main(){
    int people; 
	int *point; 
	
	cout << "How many people donated to the United Cause? "; 
	cin >> people; 
	
	point = new int [people]; 
	
	for (int i = 0; i < people; i++){
        cout << "\nEnter the donation amount" 
             << "\nfor employee #" << (i + 1) << ": $"; 
        cin >> point[i];
    }
    
    cout << "\nThe donations, in their original order, are: \n";
	showArray(point, people);

    sort(point, people);

    delete [] point; 
    point = 0; 
		
    system("pause"); 
    return 0;
}
void sort(int *a, int n){
	int min;
	int *minimum = new int[n]; 
	for (int i = 0; i < (n - 1); i++){
		min = i;
		minimum[i] = a[i];
		for (int j = i + 1; j < n; j++){
			if (a[j] > minimum[i]){
			minimum[i] = a[j];
			min = j;
			}
		}
	a[min] = a[i];
	a[i] = minimum[i];
	}
	cout << "\nThe donation amounts, in ascending " 
	     << "\norder, are: " << endl; 
	     
	for (int i = 0; i < n; i++)
		cout << "$" << a[i] << " ";
	cout << endl;
}
void showArray(int a[], int n){
	for (int i = 0; i < n; i++)
		cout << "$" << a[i] << " ";
	cout << endl;
}
