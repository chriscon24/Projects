/*
  Christian Conable
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void length(char *);
void reverse(char *);

int main(int argc, char *argv[]){
    const int SIZE = 80;
    char input[SIZE];
    
    cout << "Please enter a phrase or sentence: \n\n";
    cin.getline(input, SIZE); 
    
    cout << "\nThe entered string is ";
    length(input);
    cout << " characters." << endl;
    
    cout << "The entered string backwards is: ";
    reverse(input);
    cout << endl;
    
    system("pause"); 
    return 0; 

}

void length(char *string1){
    int stringCount = 0;
    stringCount = strlen(string1);
    cout << stringCount;
}
void reverse(char *string2){
    char *revStrng = string2;
    
    while(*revStrng != '\0')
    ++revStrng;
    
    while (revStrng != string2)
    cout.put(*--revStrng);
}
