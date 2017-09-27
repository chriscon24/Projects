#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

const int rows = 6, cols = 7;

void printTable(int table[][7]);
void sumTable(int table[][7]);

int main(int argc, char *argv[]){
    
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
    system("PAUSE");
    return EXIT_SUCCESS;
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



     
