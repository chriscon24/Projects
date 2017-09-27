/* 
   Christian Conable
*/

#include <iostream>
using namespace std; 

int main () {
    int num_ppl, allowed, denied, max_cap; 
    cout << "Enter the max capacity of the meeting room: " << endl; 
    cin >> max_cap; 
    cout << "Now enter the number of people in the meeting room: " << endl; 
    cin >> num_ppl; 
    if (num_ppl <= max_cap)
    {
       allowed = max_cap - num_ppl; 
       cout << "In regards to fire law regulations, you are under " << endl; 
       cout << "max capacity by " << allowed << " people. Unless " << endl; 
       cout << "smoking is permissible in the building." << endl; 
    }
    else 
    {
       denied = num_ppl - max_cap; 
       cout << "Uhhh... You're violating fire regulation " << endl; 
       cout << "laws by " << denied << " people. What if there's " << endl; 
       cout << "a brush fire outside? How are you going to get " << endl; 
       cout << "all those people out of there? Shame, just shame." << endl; 
       }
    system ("pause");
    
    return 0; 
}
