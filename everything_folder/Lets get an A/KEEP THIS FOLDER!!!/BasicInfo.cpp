#include "BasicInfo.h"
#include "Date.h"
#include <iostream>

//Default constructor setter	
BasicInfo::BasicInfo()
{}
//Constructor setter
BasicInfo::BasicInfo(std::string f_first, std::string l_last, char g_gender, int a_age, Date dob)
{}
//Destructor setter
BasicInfo::~BasicInfo()
{}
//Set number of members in household
void BasicInfo::setSize(int f)
{ size2 = f; }
//Return number of members in household
int BasicInfo::getSize() const
{ return size2; }
//Definition to Accessor Function
//to retrieve first name
std::string BasicInfo::getFirst() const
{return first_n;}
//Definition of Accessor Function
//to retrive student's household income
float BasicInfo::getIncome() const
{return incomes;}
//Definition to Accessor Function
//to retrieve last name
std::string BasicInfo::getLast() const
{return last_n;}
//Definition of accessor Function
//to retrieve student's gender
char BasicInfo::getGender() const
{return gender;}
//Definition of accessor Function 
//to retrieve student's age
int BasicInfo::getAge()
{return age;}
//Get student's grade level standing when transfer
char BasicInfo::getStanding() const
{return standing;}
//Definition for mutator function
//to set student's gender
void BasicInfo::setGender(char g_gender){
	if(gender == 'm' || gender == 'M')
		gender = 'm';
	else if (gender == 'f' || gender == 'F')
		gender = 'f';
	else{
	    cout << "That's not a gender..." << endl; 
	    exit(EXIT_FAILURE);}
}
//Definition of mutator Function
//to determine student's grade level standing
void BasicInfo::setStanding(char st){
     if (st == 'a' || st == 'A'){
            cout << "\nYou will be applying as" 
                 << " a Freshman transfer." << endl; 
            standing = st;
            st = 'Freshman';}
     else if (st == 'b' || st == 'B'){
          cout << "\nYou will be applying as" 
               << " a Sophomore transfer." << endl; 
          standing = st;
          st = 'Sophomore';}
     else if (st == 'c' || st == 'C'){
          cout << "\nYou will be applying as" 
               << " a Junior transfer." << endl; 
          standing = st; 
          st = 'Junior';}
     else if (st == 'd' || st == 'D'){
          cout << "\nYou will be applying as" 
               << " a Senior transfer." << endl; 
          standing = st; 
          st = 'Senior';}
     else{
         cout << "\nThat is not a choice." << endl; 
         exit(EXIT_FAILURE);}
}
//Set student's income with limitations
void BasicInfo::setIncome(float inc){
     if (inc > 1.0e5f){
         cout << "Because your combined household income" << endl; 
         cout << "is over $100,000, You will be receiving no" << endl; 
         cout << "subsidized loans from Financial Aid." << endl; 
         incomes = inc;}
     else if (inc < 1.0e5f && inc > 8.0e4f){
         cout << "Because your combined household income" << endl; 
         cout << "is over $80,000, only 25% of your financial" << endl; 
         cout << "aid will be rewarded as subsidized Stafford Loans." << endl; 
         incomes = inc;}
     else if (inc < 8.0e4f && inc > 6.0e4f){
         cout << "Because your combined household income" << endl; 
         cout << "is over $60,000, 50% of your financial" << endl; 
         cout << "aid will be rewarded as subsidized Stafford Loans." << endl; 
         incomes = inc;}
     else{
         cout << "All of your financial aid will be rewarded"
              << " as \n subsidized loans." << endl; 
         incomes = inc;}
}
bool BasicInfo::operator < (const BasicInfo &right){
    bool status;
    if (size2 < right.size2)
       status = true;
    else
        status = false;
    return status;
}
//Definition for mutator function
//to set student's age
int BasicInfo::setAge(int a_age)
{age = a_age;}
//Definition for mutator function
//to set student's first name
void BasicInfo::setFirst(std::string f)
{first_n = f;}
//Definition for mutator function
//to set student's last name
void BasicInfo::setLast(std::string l)
{last_n = l;}


