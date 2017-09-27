/*
  Christian Conable
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int doSomething(int *, int *); 
int main(int argc, char *argv[]){
    int *x1, *y1; 
    int x, y, answer; 
    
    cout << "x: "; 
    cin >> x; 
    x1 = new int; 
    *x1 = x; 
    
    cout << "y: "; 
    cin >> y; 
    y1 = new int; 
    *y1 = y; 
    
    answer = doSomething(x1, y1);
    cout << "After the mathematical operation," 
         << "\nx + y = " << answer << "." << endl; 
    
    delete x1; 
    x = 0; 
    delete y1; 
    y1 = 0; 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
int doSomething(int *x2, int *y2){
    int temp = *x2; 
    *x2 = *y2*10; 
    *y2 = temp*10; 
    return(*x2 + *y2);
}
    
