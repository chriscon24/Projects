/* 
   Christian Conable
*/

#include <iostream>
using namespace std; 

int main () {
    float prev_sal, sal_inc, inc = 7.6e-2f, new_annuel,new_month; 
    cout << "Enter your annuel salary: "; 
    cin >> prev_sal; 
    sal_inc = (prev_sal*inc)/2.0e0f; 
    new_annuel = prev_sal + sal_inc;
    new_month = new_annuel/1.2e1f; 
    
    cout << "Your pay increase in one year is $" << sal_inc << "." << endl<< endl; 
    cout <<"Your new annuel salary is $" << new_annuel << "." << endl << endl; 
    cout << "Your new monthly salary is $" << new_month << "." << endl; 
    
    system ("pause"); 
    
    return 0; 
}
