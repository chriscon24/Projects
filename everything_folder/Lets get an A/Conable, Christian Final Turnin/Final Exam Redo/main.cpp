/*
  Author: Christian Conable
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>
#include "Prob1.h"
#include "prob2.h"
#include "Prob3.h"
#include "Prob3b.h"
#include "Prob4.h"
#include "Prob5.h"

using namespace std; 

void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();

int main(int argv,char *argc[]){
    srand(static_cast<unsigned int>(time(NULL))); 
    int inN;
    do{
        Menu();
        inN = getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        default:   def(inN);}
    }while(inN >= 1 && inN <= 5);
    
    system("PAUSE"); 
    return 0;
}

void Menu(){
    cout<<"Menu for the Final"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
        cout << "In problem # 1" << endl << endl;
        char n = 5;
    	unsigned char rndseq[] = {16,34,57,79,144};
    	int ntimes = 100000;
    	Prob1Random<char> a(n,rndseq);
    	for(int i = 1;i <= ntimes;i++)
    		a.randFromSet();
    	int *x = a.getFreq();
    	unsigned char *y = a.getSet();
    	for(int i = 0;i < n;i++)
    		cout << int(y[i]) << " occured " << x[i] << " times" << endl;
    	cout << "The total number of random numbers is " << a.getNumRand() << endl;
    	cout << endl; 
    	cout << "This problem uses a template under the Prob1 header file." << endl; 
}

void problem2(){
        cout << "In problem # 2" << endl << endl;
        cout << "The start of Problem 2, the sorting problem" << endl;
    	Prob2Sort<char> rc;
    	bool ascending = true;
    	
    	ifstream infile;
    	infile.open("Problem2.txt",ios::in);
    	char *ch2 = new char[10*16];
    	char *ch2p = ch2;
    	while(infile.get(*ch2))
        {cout << *ch2; ch2++;}
    	infile.close();
    	cout << endl;
    	
    	int column;
    	do{
        	cout << "Sorting on which column: ";
        	cin >> column;
        }while(column < 1 || column > 15);
        cout << endl;  
        
    	char *zc = rc.sortArray(ch2p,10,16,column - 1,ascending);
    	for(int i = 0;i < 10;i++){
    		for(int j = 0;j < 16;j++)
    			cout << zc[i*16 + j];
    	}
    	delete []zc;
    	cout << endl;
         
}

void problem3(){
        cout << "In problem # 3" << endl << endl;
        int rows = 5;
    	int cols = 6;
    	Prob3TableInherited<int> tab("Problem3.txt",rows,cols);
    	const int *naugT = tab.getTable();
    	
    	cout << "Original Table:        " << endl; 
    	cout << "_______________________" << endl; 
    	for(int i = 0;i < rows;i++){
    		for(int j = 0;j < cols;j++)
    			cout << naugT[i * cols + j]<<" ";
    		cout << endl;
    	}
    	cout << endl;
    	const int *augT = tab.getAugTable();
    	cout << "Sum Table:                 " << endl; 
    	cout << "___________________________" << endl; 
    	for(int i = 0;i <= rows;i++){
    		for(int j = 0;j <= cols;j++)
    			cout << augT[i * (cols + 1) + j] << " ";
    		cout << endl;
    	}
    	cout << endl; 
}

void problem4(){
        cout << "In problem # 4" << endl << endl;
        SavingsAccount mine(-300);

    	for(int i = 1;i <= 10;i++)
    		mine.Transaction((float)(rand()%500)*(rand()%3-1));
    	mine.toString();
    	cout << "Balance after 7 years given 10% interest = $"
    		 << mine.Total((float)(0.10),7) << endl;
    	cout << "Balance after 7 years given 10% interest = $"
    		 << mine.TotalRecursive((float)(0.10),7)
    		 << " Recursive Calculation " << endl;
        cout << endl; 
}

void problem5(){
        cout<<"In problem # 5"<<endl<<endl;
        Employee Mark("Mark","Boss",215.50);
    	Mark.setHoursWorked(-3);
    	Mark.toString();
    	Mark.CalculatePay(Mark.setHourlyRate(20.0),Mark.setHoursWorked(25));
    	Mark.toString();
    	Mark.CalculatePay(Mark.setHourlyRate(40.0), Mark.setHoursWorked(25));
    	Mark.toString();
    	Mark.CalculatePay(Mark.setHourlyRate(60.0), Mark.setHoursWorked(25));
    	Mark.toString();
    
    	Employee Mary("Mary","Vice President",50.0);
    	Mary.toString();
    	Mary.CalculatePay(Mary.setHourlyRate(50.0), Mary.setHoursWorked(40));
    	Mary.toString();
    	Mary.CalculatePay(Mary.setHourlyRate(50.0), Mary.setHoursWorked(50));
    	Mary.toString();
        Mary.CalculatePay(Mary.setHourlyRate(50.0), Mary.setHoursWorked(60));
    	Mary.toString();
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
