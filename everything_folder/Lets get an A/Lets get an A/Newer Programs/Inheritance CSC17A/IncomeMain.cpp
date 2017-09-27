#include <cstdlib>
#include <iostream>
#include "Income2.h"
using namespace std;
int main(int argc, char *argv[]){
    int house_size, *array;  
    cout << "Enter the number of members in your household: "; 
    cin >> house_size; 
    Income2 test(house_size, array);  
    system("PAUSE");
    return EXIT_SUCCESS;
}
