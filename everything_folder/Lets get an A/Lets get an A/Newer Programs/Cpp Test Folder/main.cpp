#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    cout << "This program will read a file." << endl; 
    cout << endl; 
    
    ifstream infile; 
    infile.open("Text.txt", ios::in);
    char c; 
    while(infile.get(c))
    { cout << c; }
    infile.close();  
    cout << endl; 
    cout << "The file will now close." << endl; 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
