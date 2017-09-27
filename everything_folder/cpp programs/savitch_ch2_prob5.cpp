/*
  Christian Conable
  03/07/2014
  Savitch Chapter 2 problem 5
*/

#include <iostream>
using namespace std; 

int main () {
    float loans, intrst, months, monthly, face_val;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2); 
    
    cout << "How much loans would you like to receive?" << endl; 
    cin >> loans; 
    
    cout << endl << "What is the interest rate you would like to " << endl; 
    cout << "set your loans at? "; 
    cin >> intrst; 
    intrst /= 1.00e2f;
    
    cout << endl << "How many months would you like to pay back the loans? " << endl; 
    cin >> months; 
    
    months /= 1.20e1f;
    face_val = loans/( 1.0e0f - ((intrst)*(months)));
    monthly = face_val / (months*1.2e1f); 
                                           
    cout << endl << "Face value of loans = $" << face_val << "," << endl; 
    cout << "Monthly payments = $" << monthly << " per month." << endl;
    
    system ("pause"); 
    return 0; 
}
