#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void fill_Vec(vector<int>& even, vector<int>& odd);

int main(int argc, char *argv[]){
    int size_Vec;
    
    cout << "\nIn this program, You will determine the size of a vector and " << endl; 
    cout << "I will fill it with random even and odd numbers. Enter a " << endl;
    cout << "negative number to end the program." << endl;
    
    
    cout << "\nHow big do you want the first vector to be?: "; 
    cin >> size_Vec;
    
    vector<int> even1(size_Vec); 
    vector<int> odd1(size_Vec); 
    
    do {
        fill_Vec(even1, odd1);
        cout << "\nHow big do you want this vector to be?: "; 
        cin >> size_Vec; 
    }while(size_Vec > 0);
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
void fill_Vec(vector<int>& even, vector<int>& odd){
     int hello, hello_2; 
     int hello_double, hello_double2; 
     srand (time(NULL));
         for (int i = 0; i < even.size(); i++){
             hello = rand() % 45; 
             hello_double = (hello*2) + 10; //Generates size_Vec even numbers between 10 and 98. 
             cout << hello_double << " ";
         }
         cout << endl;
                
         for (int i = 0; i < odd.size(); i++){
             hello_2 = rand() % 49;
             hello_double2 = (hello_2*2) + 1;// Generate size_Vec odd numbers between 1 and 99. 
             cout << hello_double2 << " "; 
         } 
         cout << endl; 
}


     

