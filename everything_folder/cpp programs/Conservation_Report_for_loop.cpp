#include <iostream>
using namespace std;

int get_one_total(); 

int main(){
    
    int number_of_reports; 
    cout << "How many conservationist reports are there?"; 
    cin >> number_of_reports; 
    
    int grand_total = 0, subtotal, count; 
    for (count = 1; count <= number_of_reports; count++){
        cout << endl << "Enter the reports of "
             << "conservationist number " << count << endl; 
        subtotal = get_one_total(); 
        cout << "Total egg count for conservationist " 
             << " number " << count << " is " 
             << subtotal << endl; 
        grand_total = grand_total +subtotal; 
        }
    cout << endl << "Total egg count for all reports = " 
         << grand_total << endl; 
         
    
    system("PAUSE");
    return 0;
}
int get_one_total() {
    int total; 
    cout << "Enter the number of eggs in each nest. " << endl;
    cout << "Place a negative integer at the end " << endl; 
    cout << "of your list." <<endl; 
    
    total = 0; 
    int next; 
    cin >> next; 
    
    while (next >= 0) {
          total += next; 
          cin >> next; 
          }
          return total; 
}
