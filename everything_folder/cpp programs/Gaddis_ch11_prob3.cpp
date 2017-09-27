/*
  Christian Conable
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

struct sales {
       float quarter; 
       };   
void show_sales(sales &); 

int main(int argc, char *argv[]){
    sales division;
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2);
    
    show_sales(division);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void show_sales(sales &temp){
    const int quarterly = 4;
    for (int i = 0; i < quarterly; i++){
        float average = 0.0e0f, tot_sales = 0.0e0f; 
        cout << endl << setw(35) << "For the " << (i + 1) << " division " << endl;
        for (int j = 0; j <= quarterly - 1; j++){
             cout << "\nEnter the sales for "
                  << "\nthe " << (j + 1) << " quarter: $"; 
             cin >> temp.quarter;
             tot_sales += temp.quarter;
        }
        cout << "\nAnnual Sales = $" << tot_sales << "." << endl; 
        average = tot_sales/quarterly; 
            cout << "Average for division" << (i + 1)
                 << " = $" << average << "." << endl;   
    }
}
 
