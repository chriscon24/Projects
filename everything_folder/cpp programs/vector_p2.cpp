#include <iostream>
#include <vector>
using namespace std; 

int main (){
    int hello, hello_2, hello_double, hello_double2, how_big; 
    srand (time(NULL));
    cout << "How big do you want the vector to be?: "; 
    cin >> how_big;
    do {
        vector<int> v(how_big); 
         
        for (int i = 0; i < v.size(); i++){
            hello = rand() % 10; 
            hello_double = (hello*2) + 10; //Generates 20 odd numbers between 1 and 200. 
            cout << hello_double << " ";
        }
        cout << endl;
        
        for (int i = 0; i < v.size(); i++){
            hello_2 = rand() % 100;
            hello_double2 = (hello_2*2)+ 1; //Generates 20 odd numbers between 1 and 200. 
            cout << hello_double2 << " ";
        }
        cout << endl;
        
        cout << "How big do you want the vector to be?: "; 
        cin >> how_big;
    }while (how_big > 0); 

    system("pause"); 
    return 0; 
}
