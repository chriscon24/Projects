/*
  Christian Conable
  03/28/2014
  Gaddis Chapter 12 problem 6
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct soccer{
   string name;   
   int number, points;        
   };
   
int main(){
        const int SIZE = 12; 
        soccer player[SIZE];
        int high = 0, total = 0; 
        
        cout << "Riverside Soccer Team Information:\n";
         
        for(int i = 0; i < SIZE; i++){
                cout << "\nPlayer #" << (i + 1) << " information."; 
                cout << "\nPlayer Name: ";
                cin >> player[i].name;
                
                cout << "Player number: ";
                cin >> player[i].number;
                while(player[i].number < 0 || player[i].number > 100){
                   cout << "Invalid entry.";
                   cout << "Player Number: ";
                   cin >> player[i].number;
                }
                
                cout << "Total points: ";
                cin >> player[i].points;
                while(player[i].points < 0 || player[i].points > 100){
                   cout << "Invalid entry.";
                   cout << "Player Number: ";
                   cin >> player[i].points;
                }
                total += player[i].points;
         }
         for(int i = 1; i < SIZE; i++){
            if(player[i].points > player[high].points)
                high = i;
         }
         cout << "\nPlayer Name: " << setw(15) 
              << " Player Number: " << setw(25)
              << "Points Scored: " << endl; 
         for (int i = 0; i < SIZE; i++)
             cout << player[i].name
                  << setw(15) << player[i].number 
                  << setw(25) << player[i].points << endl;
         cout << "\nTotal Points by team: " << total << endl; 
         cout << "Player with most points: " << player[high].name << endl; 
         cout << "With " << player[high].points << " points." << endl; 
         
         system("pause");
         return 0;
}
