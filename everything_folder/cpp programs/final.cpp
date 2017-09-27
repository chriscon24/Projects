//File Name: Final.cpp
//Author: Khallid Coulter
//Conact Info: 9512339033 lasjapas@yahoo.com
//Description: A collection of problems that were assigned for CSC 5's final
//Last Changed: 


void print_table();
//outputs the array in grid form
void sums_tables();
//sums each row and each column and adds the sum to the
//end of the matching row or column

#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void Problem_one();
void Problem_two();
void Problem_three();
void Problem_four();
void Problem_five();
void Problem_six();
void Problem_ec();
void Problem_();
bool multiple_check(int, int);
void return_random(int [5], int, int);
void print_table(int grid[][7]);
void sums_tables(int grid[][7]);
void swap_element(int [], int);
void MarkNumber(char[3]);
unsigned short reverse_that_short(unsigned short);

int main(int argc, char *argv[])
{
    int menu_loop = 0;
    char ans, cls, choice;
    
    cout << "Would you like the screen to clear off the\n"
         << "previous problem while running a new problem?\n"
         << "(Your choice will not change the problems themselves)\n"
         << "Y/N/: ";
    cin >> cls;

    do
    {
        menu_loop++;
        
        if(((cls == 'y') || (cls == 'Y')))
        {
    //        cout << "works";
            system("Pause");
            system("Cls");    
        }
        
        if(menu_loop < 2)
        {
            cout << "\n\nWelcome to my Final Software\n"
                 << "Choose the problem number you would like to access\n"
                 << "\t\t*****************************\n\n";
        }
        
        cout << endl << endl << endl;
        
        for(int p = 1; p < 7; p++)     
        {
            cout << "For Program " << p << " return a " << p << endl;
        }
        
        cout << "For the extra credit, return a 7\n"
             << "To exit the program, return an 8\n"
             << "\nProgram number: ";
        
        cin >> choice;
        cout << endl;
        
    //PROBLEM MENU
        switch(choice)
        {//problem menu switch
    //PROBLEM 1
            case '1':
            {//1
                Problem_one();
                break;
            }//e1
            
    //PROBLEM 2
            case '2':
            {//2
                Problem_two();
                break;
            }//e2
            
    //PROBLEM 3
            case '3':
            {//3
                Problem_three();
                break;
            }//e3
            
    //PROBLEM 4
            case '4':
            {//4   
                Problem_four();
                break;
            }//e4
            
    //PROBLEM 5
            case '5':
            {//5
                Problem_five();
                break;
            }//e5
            
    //PROBLEM 6
            case '6':
            {//6
                Problem_six();
                break;
            }//e6
            
    //PROBLEM 7
            case '7':
            {//7
                Problem_ec();
                break;
            }//e7
            
            case '8':
            {//8
                    
                cout << "This Final project has been brought to you by\n"
                     << "Khallid Coulter. Have a great day!";
                break;
            }//e8
        }//e problem menu switch

/*       cout << "\nWould you like to try again? ";
        cin >> ans;
*/
	cout << endl;
    } while ( !(choice == '8') );
//    ((ans == 'y') || (ans == 'Y'));

    system("PAUSE");
    return EXIT_SUCCESS;
}

void Problem_one()
{
    int int_number, length, int_number_2;
    unsigned short short_number, converted_short;
    bool conversion_possible = false;
    string string_number;
    
    cout << "Your number: ";   
    cin >> string_number;
    
    //get the length of the string
    length = string_number.length();
    
    //creates an array for the regular and reverse number    
    char char_number_reversed[length];
    char char_number[length];
    
    //fill char array with the nonreversed string digits
    //I needed to add an extra iteration for the '\0' I suppose
    for(int i = 0; (i <= length); i++)
    {
        char_number[i] = string_number[i];
        
        //cout << "index: " << i << "\tc@ i: " << char_number[i] << endl;
    }
    
    //cout << "cn: " << char_number << endl;
    
    //regular number
    int_number_2 = atoi(char_number);
    
    //display the regular number
    //cout << "int_number_2: " << int_number_2 << endl;
    
    //fill char array with reversed string digits
    for(int i = 0, j = length; (i < length) && (j > 0); i++, j--)
    {
        char_number_reversed[i] = string_number[j - 1];
    }
    
    //then convert char to an int reversed
    int_number = atoi(char_number_reversed);
    
    short_number = static_cast<unsigned short>(int_number_2);
    
    //cout << "int_number: " << int_number << endl;
    //cout << "short_number: " << short_number << endl;
    
    //flip the digits of the reversed short
    converted_short = reverse_that_short(short_number);
    
    //cout << "int_number_2: " << int_number_2 << endl;
    //cout << "cs: " << converted_short << endl;
    
    //compares the correct inverted number to the function erturned value
    if((int_number == converted_short) && (converted_short <= 65535))
    {
        //conversion_possible = true;
        cout << "Your converted number is: " << converted_short << endl;
    }
    
    else
    {
        //conversion_possible = false;
        cout << "No conversion possible" << endl;
    }
}

void Problem_two()
{
    char ans;
    int guess_count, guess, random_number = 0, rn_count = 0;
    
    do
    {
        srand(static_cast<unsigned int>(time(0)));
        random_number = rand() % 1000 + 1;
        bool is_winner = false;
        
        cout << "**********************************\n"
             << "I have a number between 0 and 1000\n"
             << "Can you guess my number? You will be\n"
             << "given a maximum of 10 guesses\n"
             << "Please type your first guess\n";

        for (guess_count = 0; (guess_count < 10) && (is_winner == false) ; guess_count++)
        {
            cout << "\nGuess number " << guess_count + 1 << ": ";
            cin >> guess;
            
            if (guess == random_number)
            {
                cout << "You guessed the number!\n"
                     << "Would you like to play again(y or n): ";
                cin  >> ans;
                
                cout << endl;
                
                is_winner = true;
                
                system("CLS");
            }
            
            else if (guess > random_number)
            {
                cout << "Too high, try again\n";
            }
            
            else if (guess < random_number)
            {
                cout << "Too low, try again\n";
            }
        }
        
        if (guess_count == 10)
            cout << "Too many tries\n";
            
        cout << endl;
        
        if (guess_count == 10)
        {
            cout << "\nYou might get it next round\n";
        }
	cout << endl;
    } while ((ans == 'y') || (ans == 'Y'));
}

void Problem_three()
{
    int first, second;

    cout << "Enter two integers and I'll check if\n"
         << "the first one is a multiple of the second\n"
         << "First Number: ";
    cin >> first;
    
    if((first == 1) || (first == 0))
    {
        cout << "Try not to use 1 or 0 as your first number\n";
        do
        {   cout << "Try again: ";
            cin >> first;
        } while  ((first == 1) || (first == 0));
    }

    cout << "Second Number: ";
    cin >> second;
    
    if((second == 1) || (second == 0))
    {
        cout << "Try not to use 1 or 0 as your second number\n";
        do
        {   cout << "Try again: ";
            cin >> second;
        } while  ((second == 1) || (second == 0));
    }
    
    if (multiple_check(first, second))
    {
        cout << first << " is a multiple of " << second;
    }
    
    else
    {
        cout << first << " is not a multiple of " << second;
    }
}

void Problem_four()
{
    const int n = 5, n_times = 10000;
    int freq[n] = {0};
    short int rndseq[] = {19, 50, 78, 161, 252};
    srand(static_cast<unsigned int>(time(0)));
    
    return_random(freq, n, n_times);
  
    for(int i = 0; i < n; i++)
    {
        cout << rndseq[i] << " was called " << freq[i] << " times\n";
    }
}

void Problem_five()
{
    int size = 10;
    int fp5[] = {1, 7, 4, 0, 9, 4, 8, 8, 2, 4};                                        

    cout << "Here are the numbers to be sorted and their corresponding spot in the array: \n";
    for (int index = 0; index < size; index++)
    {
        cout << "Element " << index << " has stored a " << fp5[index] << endl;
    }
    
    swap_element(fp5, size);
    
    cout << "\nNow here is the organized list going from greatest to least: \n";
    for (int index = 0; index < size; index++)
    {
        
        cout << "Element " << index << " has now stored a  " << fp5[index] << endl;
    }
}

void Problem_six()
{
    const int usable_rows = 5, usable_columns = 6, rows = 6, columns = 7;
    
    
    int grid[6][7] = {  {141, 567, 434, 100, 269, 324, 0},
                        {578, 458, 562, 564, 305, 245, 0},
                        {381, 427, 561, 591, 595, 542, 0},
                        {427, 536, 491, 204, 502, 253, 0},
                        {392, 482, 521, 316, 318, 495, 0},
                        {0,   0,  0,  0,  0,  0, 0} };

    cout << "Here is the array pre-summation: \n";
    
    //displays the array
    print_table(grid);
    
    //sums the rows        
    //sums the columns
    sums_tables(grid);
    
    cout << endl << "Here is the array post-summation: \n";

    //displays array again
    print_table(grid);
}

void Problem_ec()
{
    char number_char[3];
    
    cout << "User, input a number between 0 and 127: ";
    cin >> number_char;
    
    MarkNumber(number_char);
}


bool multiple_check(int first, int second)
{
    int quotient = first / second;
    
    if((quotient == (first / second)) && (second * quotient == first))
    {
        return true;
    }
    
    else
    {
        return false;
    }
    
    /*
    function returns true for negative number
    If first = 12 and second = -4
    quotient = -3 according to line 64
    and the quotient * second = 12
    */
}

void return_random(int freq[5], int n, int n_times)
{
    int randy = rand() % 5;
    
    for(int i = 0; i < n_times; i++)
    {
        randy = rand() % 5;

        for(int j = 0; j < n; j++)
        {
            if(randy == j)
            {
                freq[j]++;
            }
        }
    }
}


void print_table(int grid[][7])
{
    int rows = 6, columns = 7;
    
    if(grid[5][6] > 0)
    {
        rows++, columns++;   
    }
    
    for (int current_row = 0; current_row < rows - 1; current_row++)
    {
        for (int current_column = 0; current_column < columns - 1; current_column++)
        {
            cout << setw(6) << grid[current_row][current_column];
        }
        cout << endl;
    }
}

void sums_tables(int grid[][7])
{
    const int usable_rows = 5, usable_columns = 6;
    
    for (int current_row = 0; current_row < usable_rows; current_row++)
    {
        for (int current_column = 0; current_column < usable_columns; current_column++)
        {
            grid[current_row][usable_columns] += grid[current_row][current_column];
        }
    }
        
    for (int current_row = 0; current_row < usable_rows; current_row++)
    {
        grid[usable_rows][usable_columns] += grid[current_row][usable_columns];
    }

    for (int current_column = 0; current_column < usable_columns; current_column++)
    {
        for (int current_row = 0; current_row < usable_rows; current_row++)
        {
            grid[usable_rows][current_column] += grid[current_row][current_column];
        }
    }
        
    for (int current_column = 0; current_column < usable_columns; current_column++)
    {
        grid[usable_rows][usable_columns] += grid[usable_rows][current_column];
    }
}

void swap_element(int fp5[], int size)
{
    int a, b, temp;
    int counter = 0, counter2 = 0, counter3 = 0;
    bool in_order;
    string arrayINorder;
    
    do {
        for (int index = 0; index < size; index++)
        {
//            cout << "******START******\n"; marks the start of one loop, used to help build
            int  in_order_count = 0;
            
            if (index > size - 1)
                index = 0;
/* outputs element's current data
            cout << "Element " << index + 1 << " is set to " << fp5[index] << endl;
            cout << "Element " << index + 2 << " is set to " << fp5[index + 1] << endl;
*/            
            a = fp5[index];
            b = fp5[index + 1];
                
            if ((a < b) && (index < size - 1))
            {
                temp = a;
                a = b;
                b = temp;
                
                fp5[index] = a;
                fp5[index + 1] = b;
                counter++;//times element swap has been run for n between 0 and size -1
            }
            
            else if (a == b);
            else (a > b);
            
            if (index == size - 1)
            {
                fp5[index + 1] = fp5[index] - 1;
                if (fp5[index] > fp5[index + 1]);
                counter2++;//times for n = size - 1 loop has been run
            }
/*            
            cout << "Element " << index + 1 << " is now set to " << fp5[index] << endl;
            cout << "Element " << index + 2 << " is now set to " << fp5[index + 1] << endl;
            cout << "****************************************\n";
            cout << "******END******\n"; marks the end of one loop, used to help build
*/
            
            counter3++;//times the father for loop has been run
        }
    } while (counter3< 100);
}

void MarkNumber(char number_char[3])
{
    int count = 0, number_output;
    int number_cache[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    number_output = atoi(number_char);
    
    while((number_output < 0) || (number_output > 127))
    {
        cout << "User, input a number between 0 and 127: ";
        cin >> number_char;
        number_output = atoi(number_char);
    }
    
    for(int i = 0; i <= number_output; i++)
    {
        cout << number_cache[count++];
        
        if(count == 10)
        {
            count = 0;   
        }
    }
}

unsigned short reverse_that_short(unsigned short short_number)
{
    using namespace std;
    
    unsigned short reversed_short = 0;
     
    //cout << "FUNCTION STARTS HERE" << endl;
    //cout << short_number << endl;
    
    int place_5 = (short_number / 10000);
    short_number -= (place_5 * 10000);
    
    //cout << "Place 5: " << place_5 << endl;
    //cout << "short number: " << short_number << endl;
    
    int place_4 = (short_number / 1000);
    short_number -= (place_4 * 1000);
    
    //cout << "Place 4: " << place_4 << endl;
    //cout << "short number: " << short_number << endl;
    
    int place_3 = (short_number / 100);
    short_number -= (place_3 * 100);
    
    //cout << "Place 3: " << place_3 << endl;
    //cout << "short number: " << short_number << endl;
    
    int place_2 = (short_number / 10);
    short_number -= (place_2 * 10);
    
    //cout << "Place 2: " << place_2 << endl;
    //cout << "short number: " << short_number << endl;
    
    int place_1 = (short_number / 1);
    short_number -= (place_1 * 1);
    
    //cout << "Place 1: " << place_1 << endl;
    //cout << "short number: " << short_number << endl;
    
    //cout << place_5 << endl << place_4 << endl << place_3 << endl << place_2 << endl << place_1 << endl;
    
    reversed_short = (10000 * place_1) + (1000 * place_2) + (100 * place_3) + (10 * place_4) + (1 * place_5);
    
    if((place_5 == 0) && (place_4 == 0) && (place_3 == 0) && (place_2 == 0))
    {
        reversed_short /= 10000;
    }
    
    else if((place_5 == 0) && (place_4 == 0) && (place_3 == 0))
    {
        reversed_short /= 1000;
    }

    else if((place_5 == 0) && (place_4 == 0))
    {
        reversed_short /= 100;
    }

    else if(place_5 == 0)
    {
        reversed_short /= 10;
    }
    
    //cout << "reversed_short: " << reversed_short << endl;
    //cout << "FUNCTION ENDS HERE" << endl;
    
    return reversed_short;
}
