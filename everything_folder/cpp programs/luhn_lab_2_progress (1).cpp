/*
  Christian Conable
  03/17/2014
  Luhn Lab 2
*/

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void random(char [], int);
void two_times(char [], int); 
int validate(char [], int);
void print(char [], int); 

int main(int argc, char *argv[]){
    srand(static_cast<unsigned int>(time(0)));
    char choice; 
    do { 
        int SIZE = 19, card;
        char array[SIZE]; 
        card = rand() % 5; 
        cout << endl;
        if (card == 0){
           cout << "Chosen card: American Express.";
           SIZE -= 4;
           print (array, SIZE); 
            
        }
        else if(card == 1){
           cout << "Chosen card: Visa.";
           int countT1 = 0, countF1 = 0; 
           int visa = rand()%(16 - 13) + 13;
           print(array, visa);  
        } 
        else if (card == 2){
           cout << "Chosen card: Discover.";
           SIZE -= 3; 
           print(array, SIZE);   
        }
        else if (card == 3){
           cout << "Chosen card: MasterCard.";
           int master = rand()%(19 - 16) + 16;
           print(array, master);   
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
      
     int flip = rand() % 10 + 48; 
     a[flip] = rand() % 10 + 48; 
     
     for(int i = n;i <= n + 1;i++)
        a[i]='\0';
            
}
int validate(char a[], int n){
    int check = 0, sum  = 0; 
	for(int i = n; i >= 0; i--){
		a[i] -= 48;
		sum += a[i];
	} 
	return(sum % 10);
}
void print(char a[], int n){
    int j = 0, countF = 0, countT = 0; 
    while (j <= 10000){
       random(a, n); 
       two_times(a, n);
       int valid = validate(a, n); 
       if (valid != 0)
          countF++; 
       else
          countT++;  
       j++;  
    }  
    cout << "\nInvalid = " << countF << endl; 
    cout << "Valid = " << countT << endl;   
}
