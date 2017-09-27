#include <cstdlib>
#include <iostream>


using namespace std; 

int main(int argc, char *argv[]){
    
    typedef enum {sat = 1, sun, mon, tues, wed, thurs, fri} DAY; 
    DAY day = mon; 
    
    if (day == mon)
       cout << "Monday" << endl; 
    else
       cout << "Friday" << endl; 
         
    
    system("pause"); 
    return 0; 
}
