#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void random(char [], int);
void two_times(char [], int); 
bool validate(char [], int);

int main(int argc, char *argv[]){
    
    srand(static_cast<unsigned int>(time(0)));
    char choice; 
    do { 
        int TYPE = 5, SIZE = 19; 
        int card;
        char array[SIZE]; 
        card = rand() % 5; 
        cout << endl;
        
        if (card == 0){
           cout << "Chosen card: American Express.";
           SIZE -= 4; 
           random(array, SIZE);
           cout << endl << array << endl;
           cout << "---------------";  
           two_times(array, SIZE); 
           cout << endl << array << endl; 
        }
        else if(card == 1){
           cout << "Chosen card: Visa.";
           int countT = 0, countF = 0; 
           int visa = rand()%(16 - 13) + 13;
           for (int a_lot = 0; a_lot <= 10,000; a_lot++){
               random(array, visa); 
               two_times(array, visa);
               bool valid = validate(array, visa); 
               if (valid == 0) 
                   countF++; 
               else
                   countT++; 
           }  
           cout << "\nInVvalid = " << countF << endl; 
           cout << "Valid = " << countT << endl; 
        } 
        else if (card == 2){
           cout << "Chosen card: Discover.";
           SIZE -= 3; 
           random(array, SIZE);
           cout << endl << array << endl;
           cout << "----------------";  
           two_times(array, SIZE); 
           cout << endl << array << endl;
        }
        else if (card == 3){
           cout << "Chosen card: MasterCard.";
           int discover = rand()%(19 - 16) + 16;  
           random(array, discover); 
           cout << endl << array << endl;
           two_times(array, discover); 
           cout << endl << array << endl;
        } 
        else
           cout << "Randomly chosen card.";  
        cin >> choice; 
        
        }while (choice == 'y'); 
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
void random(char a[], int n){
     for (int i = 0; i < n + 1; i++)
        a[i] = rand() % 10 + 48; 
     for(int i = n;i <= n + 1;i++)
        a[i]='\0';   
}
void two_times(char a[], int n){
     for (int i = n + 1; i >= 0; i--){
         if (i % 2 == 0){
            a[i] *= 2; 
            if(a[i] < 106)
               a[i] -= 48; 
            else 
               a[i] -= 57; 
         }
     } 
     for(int i = n;i <= n + 1;i++)
        a[i]='\0';       
}
bool validate(char a[], int n){
    int check = 0, sum  = 0;
	for(int i = n; i >= 0; i--){
		a[i] -= 48;
		sum += a[i];
	}
	check = (9 * sum) % 10; 
	if((sum % 10) != 0){
		cout << "\nThis card is invalid";
		return 0; 
	}
	else{
		cout << "\nThis card is valid";
        return 1; 	
	}
}
     
