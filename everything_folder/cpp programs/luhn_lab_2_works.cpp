/*  
    Christian Conable
    Luhn Algorithm 
*/

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[]){
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE = 10; 
    char a[SIZE], choice;
    bool valid = true;  
    int countF = 0, countT = 0; 
    do {
        int j = 0; 
        while (j <= 10000){
            for (int i = 0; i < SIZE + 1; i++)
                a[i] = rand() % 10 + 48;  
            for (int i = 0; i < SIZE + 1; i++){
                if (i % 2 == 0){
                   a[i] *= 2; 
                   if(a[i] < 106)
                       a[i] -= 48; 
                   else 
                       a[i] -= 57; 
                }
            }   
           	int check = 0, sum  = 0;
        	for(int i = 0; i < SIZE; i++){
        		a[i] -= 48;
        		sum += a[i];
        	}
        	check = (9 * sum) % 10; 
        	if((sum % 10) != 0)
        		countF++; 
        	else
        		countT++; 
            j++; 
        }	
        cout << "invalid: " << countF << endl; 
        cout << "valid: " << countT << endl; 
         
        cout << endl << "Again: " << endl; 
        cin >> choice; 
    }while (choice == 'y' || choice == 'Y');  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

