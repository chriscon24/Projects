/*
  Christian Conable
  Gaddis Chapter 10 problem 3
*/

#include <iostream>
#include <cstring>

using namespace std;

int words(char *);

int main(int argc, char *argv[]){ 
    char strings[80]; 
    cout << "Enter a string(up to 80 characters) : "; 
    cin.getline(strings, 81); 
    cout << "User String has " << words(strings) << " words." << endl;
    
    system ("pause"); 
    return 0;
}

int words(char *strptr){ 
    int count = 1; 
    while(*strptr != '\0'){           
        if(*strptr == ' ')          
            count++; 
        *strptr++; 
    } 
    return count; 
}
