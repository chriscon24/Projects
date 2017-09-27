/*
  Conable, Christian
  03/07/2014
  Savitch, Chapter 1 problem 9
*/

#include <iostream> 
using namespace std; 

const float gravity = 3.217e1f;
int main(){
    float time, distance;
    cout << "This program will comput the distance for a ball" << endl; 
    cout << "to drop given the time that you input." << endl;  
    cout << "How many seconds did the ball drop?" << endl;
    cin >> time;

    distance=0.50e0f*gravity*time*time;

    cout << endl << "distance = " << distance << " feet." << endl;
    
    system("pause"); 
    return 0;
}

