/*
  Christian Conable
  Final
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <vector>
using namespace std;

const int rows = 6, cols = 7;

//function prototypes
void fill_Vec(vector<int>& even, vector<int>& odd);
void retrand(short int*, int [5], int, int);
void printTable(int table[][7]);
void sumTable(int table[][7]);

 
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);
    return 0;
}

void Menu(){
    cout<<"\nMenu for the Final"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
        int n, n2, size;
        unsigned short conv_n;
        string number;      
        cout << "Please Enter a number and I will display it " << endl; 
        cout << "in reverse order: ";  
        cin >> number; 
        
        size = number.size();
        char original[size], reversed[size];
        for(int i = 0; i <= size; i++)
                original[i] = number[i];
                        
        n2 = atoi(original); 
        if (n2 >= 65534)
           cout << endl << "No conversion possible." << endl; 
        else{
            for (int count1 = 0; count1 < size; count1++){
                for(int count2 = size; count2 > 0; count2--)
                    original[count1] = number[count2 - 1]; 
            }
            n = atoi(reversed); 
            conv_n = static_cast<unsigned short>(n2);
            
            unsigned short final = 0; 
            int first; 
            first = conv_n/10000; 
            conv_n = conv_n - (first*10000);
            int second; 
            second = conv_n/1000;
            conv_n = conv_n - (second*1000); 
            int third; 
            third = conv_n/100;
            conv_n = conv_n - (third*100); 
            int fourth; 
            fourth = conv_n/10;
            conv_n = conv_n - (fourth*10); 
            int fifth;
            fifth = conv_n/1; 
            conv_n = conv_n - (fifth*1); 
            final = (first*1) + (second*10) + (third*100) + (fourth*1000) + (fifth*10000);
            
            //get rid of extra 0's 
            if((first == 0) && (second == 0) && (third == 0) && (fourth == 0))
                final = final/10000;
            else if((first == 0) && (second == 0) && (third == 0))
                final = final/1000;
            else if((first == 0) && (second == 0))
                final = final/100;
            else if(first == 0)
                final = final/10;
            cout << endl << "The number in reverse is: " << final << endl;
        }
        n2 = 0; 
}

void problem2(){
        cout << endl << "In this problem, you will have 9 attempts to" << endl; 
        cout << "correctly guess a number between 1 and 500." << endl; 
        
        char choice;
        int answer, guess; 
        srand(static_cast<unsigned int>(time(0))); 
        do {
            int answer, guess; 
            srand(static_cast<unsigned int>(time(0)));
            answer = rand() % 500 + 1;
            int number; 
            cout << endl << "What do you think the number is? "; 
            cin >> number; 
            
            if (number == answer)
               cout << "That's it!! You guessed the correct number." << endl; 
            else {
                int count = 0; 
                while ((number != answer) && (count <= 9)){
                      if (number < answer)
                         cout << "That guess is too low. Try again: "; 
                      else if (number > answer)
                         cout << "That guess is too high. Try again: ";
                      cin >> number; 
                      count++; 
                }
            }
            if (number == answer)
               cout << endl << "That's it!! You guessed the correct number." << endl;
            else {
               cout << endl << "You did not guess the correct answer and you" << endl; 
               cout << "exceeded the number of attempts.";
            }
            cout << endl << "Would you like to play again? Enter Y" << endl;
            cout << "for Yes or N for no: "; 
            cin >> choice; 
            if (choice == 'N' || choice == 'n')
               cout << "Ok see ya." << endl; 
        }while (choice == 'Y' || choice == 'y'); 
}

void problem3(){
     int size_Vec;
    
     cout << "\nIn this program, You will determine the size of a vector and " << endl; 
     cout << "I will fill it with random even and odd numbers. Enter a " << endl;
     cout << "negative number to end the program." << endl;
    
    
     cout << endl << "\nHow big do you want the first vector to be?: "; 
     cin >> size_Vec;
    
     do {
        vector<int> even1(size_Vec); 
        vector<int> odd1(size_Vec); 
        fill_Vec(even1, odd1);
        size_Vec = 0; 
        
        cout << "\nHow big do you want this vector to be?: "; 
        cin >> size_Vec; 
        
     }while(size_Vec > 0);
}
       
void problem4(){
    const int n = 5, ntimes = 10000;
    short int rndseq[] = {9,51,78,181,251};
    int freq[n] = {0};
    cout << endl <<  "This program will loop the " << endl; 
    cout << "sequence  9,51, 78, 181, and 251 " << endl; 
    cout << "10,000 times and will display the frequency" << endl;
    cout << "at which these numbers were generated" << endl; 
    cout << "in the loop." << endl; 
    
    retrand(rndseq, freq, n, ntimes);     
}

void problem5(){
        cout<<"In problem # 5"<<endl<<endl;
        cout << "No comment." << endl; 
}

void problem6(){
    cout << endl << "This program will show a table of values and " << endl; 
    cout << "display both the sum of the rows, the sum of the " << endl; 
    cout << "columns, and the sum of all the rows and columns." << endl;
    int table[rows][cols] = {{100, 101, 102, 103, 104, 105},
                             {106, 107, 108, 109, 110, 111},
                             {112, 113, 114, 115, 116, 117},
                             {118, 119, 120, 121, 122, 123},
                             {124, 125, 126, 127, 128, 130}};
                             
    cout << endl <<  "Original table: " << endl;
    printTable(table);
    
    sumTable(table);
    
    cout << endl << "Table after rows and columns have been summed: " << endl;
    printTable(table);
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}

void fill_Vec(vector<int>& even, vector<int>& odd){
     int hello, hello_2; 
     int hello_double, hello_double2; 
     srand (time(NULL));
     
         cout << endl << "Even numbers: ";
         for (int i = 0; i < even.size(); i++){
             hello = rand() % 45; 
             hello_double = (hello*2) + 10; //Generates size_Vec even numbers between 10 and 98. 
             cout << hello_double << " ";
         }
         cout << endl << "Odd numbers: ";
         for (int i = 0; i < odd.size(); i++){
             hello_2 = rand() % 49;
             hello_double2 = (hello_2*2) + 1;// Generate size_Vec odd numbers between 1 and 99. 
             cout << hello_double2 << " "; 
         } 
}
void retrand(short int* rndseq, int freq[5], int n, int ntimes){
    srand(time(NULL));
    for(int count1 = 0; count1 < ntimes; count1++){
        int number;
        number = rand() % 5;
        for(int count2 = 0; count2 < n; count2++){
            if(number == count2)
                freq[count2] = freq[count2] + 1;
        }
    }
    cout << endl; 
    for(int count1 = 0; count1 < n; count1++)
        cout <<  rndseq[count1] << " occured " << freq[count1] << " times\n";
    cout << endl; 
}
void printTable(int table[][7]){
    int row, col;
    row = 6; 
    col = 7; 
    if(table[5][6] > 0){
        row = row + 1; 
        col = col + 1;
        table[5][6] /= 2; 
    }    
    for (int i = 1; i < row; i++){
        for (int j = 1; j < col; j++)
            cout << setw(6) << table[i - 1][j - 1];
        cout << endl;
    }
}
void sumTable(int table[][7]){
    const int row = 5, col = 6;
    for (int i = 0; i < row; i++){         //Sum the columns
        for (int j = 0; j < col; j++)      
            table[i][col] += table[i][j];
        table[row][col] += table[i][col];
    }
    for (int j = 0; j < col; j++){
        for (int i = 0; i < row; i++)      //Sum the rows
            table[row][j] += table[i][j];
        table[row][col] += table[row][j];
    }

}


