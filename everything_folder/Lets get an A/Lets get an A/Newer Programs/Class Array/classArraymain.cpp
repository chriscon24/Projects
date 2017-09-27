#include <cstdlib>
#include <iostream>
#include "Test.h"

using namespace std;

int main(int argc, char *argv[]){
    const int number = 5;
    const int number2 = 5; 
    Test set[number][number2]; 
    int input; 
    for(int i = 0; i < number; i++){
            for(int j = 0; j < number2; j++){
            cout << "Trial " << (i + 1) << "\ninput " 
                 << (j + 1) << ": ";
            cin >> input;
            set[i][j].setInput(input); }}
    for(int i = 0; i < number; i++){
            for(int j = 0; j < number2; j++)
                    cout << set[i][j].getInput() << endl; }
    system("PAUSE");
    return EXIT_SUCCESS;
}
