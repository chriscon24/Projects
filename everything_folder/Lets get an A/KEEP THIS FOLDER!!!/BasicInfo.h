
#ifndef BASICINFO_H
#define BASICINFO_H
#include <string>
#include "Date.h"

using namespace std;

class BasicInfo{
	private:
        char gender;
		int age;
		int size2;
		float incomes; 
		Date dob;
		std::string first_n; 
		std::string last_n;
		char standing; 
	public:
        //Default Constructor for Basic Info Header File
        BasicInfo();
        //Constructor for Basic Info Header File
		BasicInfo(std::string f_first, std::string l_last, char g_gender, int a_age, Date dob);
		//Mutator Functions for Name, 
		//Gender, and age input for BasicInfo Header File
		void setGender(char g_gender);
		int setAge(int a_age);
		void setFirst(std::string f);
		void setLast(std::string l);
		void setStanding(char st);
		void setSize(int f); 
		int getSize() const; 
        void setIncome(float inc);  
		//Accessor Functions for said input 
		//verifications for BasicInfo Header File
		std::string getFirst() const;
		std::string getLast() const;
		char getGender() const;
		int getAge();
		char getStanding() const; 
		float getIncome() const; 
		//Destructor
		~BasicInfo();
        //Relational Operator
        bool operator < (const BasicInfo &); 	
};
#endif
