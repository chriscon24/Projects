/*
  Description: Specification File 
  for Student Information
*/
#ifndef STUDENT_H
#define STUDENT_H
#include "BasicInfo.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <string>
#include <cstring>

using namespace std; 

class Student : public BasicInfo{
	private:
		std::string State;
		std::string social_number;
		std::string city;
		std::string phone; 
		std::string* collegeList;
		std::string high_school;
		std::string userfile;
		std::string highSchool;
		std::string first_n;
		std::string last_n;
		std::string coll_major;
		Date hs_grad_date;
		static const int size;
		int Zip;
         
	public:
        //Default Constructor for Student Header File   
		Student();
		//Constructors for Student Header File
		Student(std::string first, std::string last);
		Student(std::string first, std::string last, char gender, int age, Date dob);
		Student(std::string first, std::string last, char gender, int age, Date dob, std::string state, std::string city, int zip);
		Student(std::string first, std::string last, char gender, int age, Date dob, std::string state, std::string city, int zip, std::string phone);
		~Student();
		//Display Graduation Date
		void Grad();
		//Mutator Functions 
		void setFirst(std::string fst);
        void setLast(std::string lst);  
		void setState(std::string st);
		void setCity(std::string c);
		void setZip(int z);
		void setPhone(std::string p_phone);
		void setHS(std::string high_school);
		void setSocial(std::string social);
		void setMajor(std::string major); 
		void setGrad() const;
		//Validate the social security number
		bool valid_social(string social);
		//Display social security number
		void display_social();
		void display_social(int dummy);
		//Validate the phone number input
		bool phone_valid(string phone);
		std::string clean_phone(std::string phone, int size);
		bool phone_valid(std::string phone, int size);
		//Accessor Functions
		std::string getFirst() const; 
		std::string getLast() const; 
		std::string getState() const;
		std::string getCity() const;
		int getZip() const;
		std::string getSocial() const; 
		std::string getPhone() const;
		std::string getHS() const;
		std::string getMajor() const; 
		std::string get_social();
};

#endif
