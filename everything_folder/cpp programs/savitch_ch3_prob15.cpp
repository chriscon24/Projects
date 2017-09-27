/*
  Christian Conable
*/

#include <iostream>
using namespace std;

const float pi = 3.141592e0f;
int main()
{
    float lambda = 6.24e1f, weight; 
    float radius, volume, force;
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2); 
    
    cout << "Enter the weight of the ball, in pounds: "; 
    cin >> weight;   
    
    cout << "Enter the radius of the ball in feet: "; 
    cin >> radius; 

    volume = ((4.0e0f*pi)*radius*radius*radius)/3.0e0f;
    force = volume*lambda; 
    
    cout << "The buoyant force of the ball is " << force << " pounds." << endl;
    
    if (weight <= force)
       cout << "The ball will not sink." << endl;  
    else
        cout << "The ball will sink." << endl;
    system ("pause"); 
    return 0;
    
}
