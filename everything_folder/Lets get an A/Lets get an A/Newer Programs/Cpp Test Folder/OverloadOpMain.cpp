#include <cstdlib>
#include <iostream>
#include "FeetInches.h"

using namespace std;

int main(int argc, char *argv[]){
    int feet, inches;
    FeetInches first, second;
    
    cout << "Enter a distance in feet and inches: ";
    cin >> feet >> inches;
    first.setFeet(feet);
    first.setInches(inches);
    
    cout << "Enter another distance in feet and inches: ";
    cin >> feet >> inches;
    second.setFeet(feet);
    second.setInches(inches);
    
    if (first == second)
       cout << "first is equal to second.\n";
    if (first > second)
       cout << "first is greater than second.\n";
    if (first < second)
       cout << "first is less than second.\n";
       
    system("PAUSE");
    return EXIT_SUCCESS;
}
