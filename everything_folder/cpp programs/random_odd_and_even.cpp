#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[]){
    srand (time(NULL));
    int hello, hello_double;
    for (int i = 0; i < 20; i++){
          hello = rand() % 100; 
        //hello_double = (hello*2); //Generates 20 even numbers between 1 and 200.
          hello_double = (hello*2) + 1; //Generates 20 odd numbers between 1 and 200. 
          cout << hello_double << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
