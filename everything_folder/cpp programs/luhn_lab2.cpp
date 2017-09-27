#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
enum CrdCard{visa = 1, master, amex, discover, ALL};
void random (char [], int); 
void random2 (char [], int );
void two_times(char [], int);
void two_times2(char [], int o); 

int main(int argc, char *argv[]){
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE1 = 13, SIZE2 = 16, SIZE3 = 15; 
    int card_type;
    char array[SIZE1], brray[SIZE2], a[SIZE2], b[SIZE3], choice; 
    
    cout << "What credit card would you like to choose? For "
         << "\nVisa, press 1, for Mastercard, press 2, " 
         << "\nFor American Express, press 3, for Discover "
         << "\npress four: ";
    do {
         
        cin >> card_type; 
        
         switch (card_type){
                //Visa
                case 1:
                     cout << endl << "Visa" << endl;
                     random(array, SIZE1);
                     
                     cout << endl << array << endl; 
                     cout << "-------------" << endl;
                     
                     two_times(array, SIZE1); 
                     
                     cout << array << endl;   
                      
                     break; 
                case 2: 
                     cout << endl << "Mastercard" << endl;
                     random2 (brray, SIZE2); 
                    
                     cout << brray << endl;
                     cout << "----------------" << endl;
                     
                     two_times2(brray, SIZE2);   
                      
                     cout << brray << endl;
                     
                     break;
                case 3: 
                     cout << endl << "American Express." << endl;
                     for (int i = 0; i < SIZE3; i++){
                         b[i] = rand() % 10 + 48; 
                         cout << b[i]; 
                     } 
                     cout << endl;
                     cout << "---------------" << endl;  
                     
                     for (int i = 0; i < SIZE3; i++){
                         if (i % 2 == 0){
                            b[i] *= 2; 
                            if(b[i] < 106)
                               b[i] -= 48; 
                            else 
                               b[i] -= 57; 
                         }
                         cout << b[i]; 
                     }      
                     cout << endl; 
                     break; 
                case 4:
                     cout << endl << "Discover" << endl; 
                     for (int i = 0; i < SIZE2; i++){
                         a[i] = rand() % 10 + 48; 
                         cout << a[i]; 
                     } 
                     cout << endl;
                     cout << "----------------" << endl;  
                     
                     for (int i = 0; i < SIZE2; i++){
                         if (i % 2 != 0){
                            a[i] *= 2; 
                            if(a[i] < 106)
                               a[i] -= 48; 
                            else 
                               a[i] -= 57; 
                         }
                         cout << a[i]; 
                     }      
                     cout << endl;
                     break; 
         }
         cout << "Wanna try another card? y/n: "; 
         cin >> choice; 
         if (choice == 'N' || choice == 'n')
            cout << "Okay see ya." << endl; 
        }while (choice == 'Y' || choice == 'y');  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void random (char a[], int n){
     for (int i = 0; i < n; i++)
         a[i] = rand() % 10 + 48;  
}
void random2 (char b[], int o){
     for (int i = 0; i < o; i++)
         b[i] = rand() % 10 + 48;  
}
void two_times(char a[], int n){
      for (int i = 0; i < n; i++){
          if (i % 2 == 0){
             a[i] *= 2; 
             if(a[i] < 106)
                  a[i] -= 48; 
             else 
                  a[i] -= 57; 
          } 
      }      
}
void two_times2(char b[], int o){
      for (int i = 0; i < o; i++){
          if (i % 2 == 0){
             b[i] *= 2; 
             if(b[i] < 106)
                  b[i] -= 48; 
             else 
                  b[i] -= 57; 
          } 
      }      
}

     

                    
