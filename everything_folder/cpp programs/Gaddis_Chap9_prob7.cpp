/*
  Christian Conable
*/


#include <iostream>
using namespace std;

void sort(int *[], int);
void showArray(const int [], int);
void show_pt(int *[],int);

int main(){
	const int donations = 15;
	int people[donations] = {5, 100, 5, 25, 10, 5, 25, 5, 5, 100, 10, 15, 10, 5, 10}; 
	int *point[donations]; 

	for (int i = 0; i < donations; i++)
		point[i] = &people[i];

		sort(point, donations);

		cout << "\nThe donations, sorted in descending order are: \n";
		show_pt(point, donations);

		cout << "\nThe donations, in their original order, are: \n";
		showArray(people, donations);
		
		system("pause"); 
		return 0;
	}

void sort(int *arr[], int size){
	int startScan, min;
	int *minElem;

	for (int i = 0; i < (size - 1); i++){
		min = i;
		minElem = arr[i];
		for (int j = i + 1; j < size; j++){
			if (*(arr[j]) > *minElem){
			minElem=arr[j];
			min = j;
			}
		}
	arr[min] = arr[i];
	arr[i] = minElem;
	}
}
void showArray(const int arr[], int size){
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void show_pt(int * arr[], int size){
	for (int i = 0; i < size; i++)
		cout << *(arr[i]) << " ";
	cout << endl;
}
