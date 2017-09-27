#include <cstdlib>
#include <iostream>
#include "RelateOp.h"

using namespace std;

int main(int argc, char *argv[]){
    Incomes size, employed; 
    int house_size;  
    cout << "Enter the number of members in your household: "; 
    cin >> house_size; 
    if (house_size < 0){
                   cout << "\nYou cannot have a negative number"
                        << " for household members." << endl; 
                   cout << "Household Size: "; 
                   cin >> house_size; 
                   while (house_size < 0){
                         cout << "Household Size: "; 
                         cin >> house_size;}
                   size.setSize(house_size);}
    size.setSize(house_size);
    cout << "\nHow many members in your household are"
         << " over the \nage of 16 and are currently"
         << " employed?" << endl; 
    cout << "Number of employed members: "; 
    cin >> house_size;
    employed.setSize(house_size);
    if(size < employed){
            cout << "\nyou cannot have more employed members"
                 << "\nthen there are members in your"
                 << " household." << endl; 
            cout << "Number of employed members: "; 
            cin >> house_size; 
            employed.setSize(house_size);
            if (size < employed){
                  cout << "\nYou can't follow directions. "
                       << "\n\nEnd Program..." << endl; 
                  system("PAUSE"); 
                  exit(EXIT_FAILURE);}
            employed.setSize(house_size); }
    cout << endl; 
    cout << "Number of Members in household: " << size.getSize() << "." << endl; 
    cout << "Number of Employed Members: " << employed.getSize() << "." << endl;         
    system("PAUSE");
    return EXIT_SUCCESS;
}
