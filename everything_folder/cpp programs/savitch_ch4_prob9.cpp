/*
  Christian Conable 
*/

#include <iostream>
using namespace std; 

int main () {
    int height, weight, age, old, count, waist; 
    float hat_size, size, again; 
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);

    cout << "Please enter your height, in inches: "; 
    cin >> height; 
    
    cout << "Please enter your weight, in pounds: "; 
    cin >> weight; 
    
    cout << "Enter your age: "; 
    cin >> age; 
    
    hat_size = (weight/static_cast<float>(height))*2.9e0f;  
    old = age + 10; 
    
    if (old >= 30){
       if((old % 10) !=0){
               old -= old;
               count = (age - 3.0e1f)/1.0e1f;
               size =((height * weight) / 2.88e2f)+((1.0/8.0e0f)*count);
       }
    }
    else 
        size = (height*weight)/2.88e2f; 
        
    if (old >= 28) {
            if ((old % 2) != 0) {
               age -= age;
               again = (age - 2.8e1f)/2.0e0f; 
               waist = weight/5.7e0f + (1/10)*again; 
            }
    }
    else
       waist = weight/5.7e0f; 
     
    
    cout << endl << "Hat size = " << hat_size << "." << endl; 
    cout << "Jacket size in 10 years = " << size << "." << endl; 
    cout << "Waist size in 10 years = " << waist << "." << endl; 
    
    system ("pause"); 
    return 0; 
}
