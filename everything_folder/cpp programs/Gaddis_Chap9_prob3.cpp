/*
  Christian Conable
  Gaddis Chapter 9 problem 2
  03/14/2014
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void sort(int *, int); 
float averages (int *, int); 

int main(int argc, char *argv[]){
    int *students, *new_array;
    int student, total = 0, temp;
    float average; 
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint);
    cout.precision(2); 
    
    cout << "This program asks the user to enter the " 
         << "\nnumber of students in the class along"
         << "\nwith their corresponding test scores." 
         << "\nThe computer will then output the average"
         << "\nscore for the class." << endl; 
         
    cout << endl << "Enter the number of students"
         << "\nin the class: "; 
    cin >> student; 
    
    students = new int [student]; 
    for (int i = 0; i < student; i++){
        cout << "Enter the test score" 
             << "\nfor student " << (i + 1) << ": "; 
        cin >> students[i]; 
    } 
    
    average = averages(students, student);
    sort(students, student);
    
    new_array = new int [student - 1]; 
    for (int i = 0; i < student - 1; i++){
        new_array[i] = students[i + 1];
    }  
    
    
    cout << "\nIn sorted order: "; 
    for (int i = 0; i < student - 1; i++)
        cout << new_array[i] << " ";  
    
    cout << endl << "\nThe Average score for the class" 
         << "\nis a " << average << "." << endl; 
        
    cout << endl; 
    delete [] students;
    students = 0; 
    delete [] new_array; 
    new_array = 0; 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void sort(int *a, int n){
    int min; 
    int *minimum = new int[n]; 
    for (int i = 0; i < n - 1; i++){
        minimum[i] = a[i]; 
        for (int j = i + 1; j < n; j++){
            if(a[j] < minimum[i]){
                minimum[i] = a[j]; 
                min = j;
            }
        }
        a[min] = a[i]; 
        a[i] = minimum[i]; 
    }
}
float averages (int *a, int n){
    int total = 0, lowest, bad_grade; 
    float average; 
    for (int i = 1; i < n; i++){
        lowest = a[0]; 
        if (a[i] < lowest) 
            lowest = a[i];
    } 
    for (int i = 0; i < n; i++)
        total += a[i];
    bad_grade = total - lowest; 
     
        
    return(static_cast<float>(bad_grade)/n);
}
     
     
