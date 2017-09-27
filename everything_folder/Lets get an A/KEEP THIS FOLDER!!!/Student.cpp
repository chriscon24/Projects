/*
  Description: Specification File 
  for Student Information
*/

#include "Student.h"
#include "BasicInfo.h"
#include <cstdlib>
#include "Date.h"
#include <string>
#include <iostream> 

using namespace std; 

const int Student::size = 10;
//Definition for Default constructor created 
//in Student header file
Student::Student(){
	first_n = " "; 
	last_n = " "; 
	phone = new char[11];}
//Definition for 1st Constructor created in Student Header File
Student::Student(std::string first, std::string last){
	first_n = " "; 
	last_n = " "; 
	phone = new char[11];}
//Definition for 2nd Constructor created in Student Header File
Student::Student(std::string first, std::string last, char gender, int age, Date dob){
	first_n = " "; 
	last_n = " "; 
	phone = new char[11];}
//Definition for 3rd Constructor created in Student Header File
Student::Student(std::string first, std::string last, char gender, int age, Date dob, std::string state, std::string city, int zip){
	first_n = " "; 
	last_n = " "; 
	phone = new char[11];}
//Definition for 4th Constructor created in Student Header File
Student::Student(std::string first, std::string last, char gender, int age, Date dob, std::string state, std::string city, int zip, std::string phone){
	first_n = " "; 
	last_n = " "; 
	phone = new char[11];}
//Destructor for Dynamically allocated variables 
//created in Student Header File
Student::~Student()
{}
//Mutator Functions for first and last name 
//Set student's first name
void Student::setFirst(std::string fst)
{first_n = fst;}        
//Set student's last name
void Student::setLast(std::string lst)
{last_n = lst; } 
//Set student's city of residence
void Student::setCity(std::string c)
{city = c;}
//Set the student's state of residency
void Student::setState(std::string st)
{State = st;}
//Set the Zip Code Established in Main
void Student::setZip(int z)
{Zip = z;}
//Set the Student Major (with limitations) created in Main
void Student::setMajor(std::string maj){
     if (maj == "Electrical Engineering" || maj == "electrical engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Chemical Engineering" || maj == "chemical engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Computer Engineering" || maj == "computer engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Civil Engineering" || maj == "civil engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Structrual Engineering" || maj == "structural engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Nuclear Engineering" || maj == "nuclear engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Energy Engineering" || maj == "energy engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Biomedical Engineering" || maj == "biomedical engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Biological Engineering" || maj == "biological engineering"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Computer Science" || maj == "computer science"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else if (maj == "Computer Information Systems" || maj == "computer information systems"){
             cout << "One of your school choices offers"       
                  << "\nthat major." << endl; 
             coll_major = maj; }
     else{
         cout << "That major is not offered at"
              << " any of your college choices." << endl;
         system("PAUSE");  
         exit(EXIT_FAILURE); }
}
//Set Student's Social Security Number
void Student::setSocial(std::string social)
{social_number = social;}
//Set the student's High school 
void Student::setHS(std::string hs_high_school)
{highSchool = hs_high_school;}
//Accessor Functions for first and last name
//Get student's first name
std::string Student::getFirst() const
{return first_n; }
//Get student's last name
std::string Student::getLast() const
{return last_n; }
//Get student's city of residence
std::string Student::getCity () const
{return city; }
//Get the state student lives in.           
std::string Student::getState() const
{return State;} 
//Get the student zip code
int Student::getZip() const
{return Zip;}
//Get the student's social security number
std::string Student::getSocial() const
{return social_number;}
//get the student's phone number
std::string Student::getPhone() const
{return phone;}
//Get the student's high school 
std::string Student::getHS() const
{return highSchool;}
void Student::setGrad() const{
   if (hs_grad_date.year < 1975){
      cout << "I'm sorry but you're"
           << " too old to be going to college." 
           << "\nWe will not be accepting your application." << endl; 
      system("PAUSE"); 
      exit(EXIT_FAILURE);}
   else if (hs_grad_date.year > 2013){
        cout << "Nope you haven't graduated from high school yet." 
             << "\nYour application has been deleted." << endl;
        system("PAUSE");      
        exit(EXIT_FAILURE);}
}
//Get Student's Social Security Number
std::string Student::get_social()
{return social_number;}
//Get the student's Major of choice
std::string Student::getMajor() const
{return coll_major;}



