/*
  Christian Conable
*/

#include <iostream> 
using namespace std;

void input(float&, float&); 
float convert (float&, float&, float&, float&); 
void output (float, float); 

int main () {
    
    char choice; 
    do {
        float meter, centi, feet, inch; 
        input (meter, centi); 
        convert (meter, centi, feet, inch); 
        output (feet, inch); 
        
        cout << "Play again (y/n)? "; 
        cin >> choice; 
        
        if (choice == 'N' || choice == 'n')
           cout << "Ok see ya!" << endl; 
        }while (choice == 'Y' || choice == 'y'); 
        
    system ("pause"); 
    return 0; 
}
void input(float& meter, float& centi) { 
     cout << "Enter meters: "; 
     cin >> meter; 
        
     cout << "Enter centimeters: "; 
     cin >> centi; 
     
     cout.setf(ios::fixed); 
     cout.setf(ios::showpoint); 
     cout.precision(2); 
}
float convert (float& meter, float& centi, float& feet, float& inch){
    float total; 
    meter *= 1.0e2f; 
    total = meter + centi; 
    
    inch = total/2.54e0f; 
    feet = inch/1.2e1f; 
}
void output (float feet, float inch) {
    cout << endl << "The lengh in inches is " << inch << " inches." <<  endl; 
    cout << "The length in feet is " << feet << " feet." << endl;  
}
