/*
  Christian Conable
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void sort(int *, int); 
float averages (int *, int); 

int main(int argc, char *argv[]){
    int *students;
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
    
    cout << "In sorted order: "; 
    for (int i = 0; i < student; i++)
        cout << students[i] << " ";  
    
    cout << endl << "\nThe Average score for the class" 
         << "\nis a " << average << "." << endl; 
        
    cout << endl; 
    delete [] students; 
    students = 0; 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void sort(int *a, int n){
    int min; 
    int *minimum = new int[n]; 
    for (int i = 0; i < n - 1; i++){
        min = i;
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
    int total = 0; 
    float average; 
    for (int i = 0; i < n; i++)
        total += a[i]; 
    return(static_cast<float>(total)/n);
}
     
     
