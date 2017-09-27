#ifndef FOREIGN_H
#define FOREIGN_H
#include <iostream>
using namespace std;
template <class T> 
class Foreign{
      private:
                T license, month; 
                T toefl, first2; 
                T second, third; 
                T fourth, add; 
                float sum;
                float score; 
                float total; 
                float average; 
            	char choice, citizen; 
                char document;
      public:
              void setLicense(T lic);
              T getLicense() const;
              //Declaration of Student's Citizenship Status
              void setCitizen(char cit);
              char getCitizen() const
              { if (citizen == 'y' && citizen == 'Y')
                { cout << "United States Citizen" << endl; 
                  return citizen; }
                if (citizen == 'n' && citizen == 'N')
                { cout << "Not United States Citizen" << endl; 
                  return citizen; }} 
              //Does student have proper documentation of Citizenship?
              void setDocument(char doc);
              char getDocument() const
              { if (document == 'a' && document == 'A')
                { cout << "Birth Certificate" << endl; 
                  return document; }
                else if (document == 'b' && document == 'B')
                { cout << "Passport" << endl; 
                  return document; }
                else if (document == 'c' && document == 'C')
                { cout << "Naturalization Certificate" << endl; 
                  return document; }
                else if (document == 'd' && document == 'D')
                { cout << "Certificate of Citizenship" << endl; 
                  return document; }
                else
                { cout << "Was not required to present proof"
                       << " of citizenship." << endl; 
                  return document; }} 
                //set the month of the year 
                void setMonth(char m);
                void getMonth()
                { if (month = 1)
                     cout << "January"; 
                  else if (month = 2)
                  { cout << "February"; } 
                  else if (month = 3)
                     cout << "March"; 
                  else if (month = 4)
                    cout << "April"; 
                  else if (month = 5)
                     cout << "May";
                  else if (month = 6)
                     cout << "June";
                  else if (month = 7)
                     cout << "July"; 
                  else if (month = 8)
                     cout << "August"; 
                  else if (month = 9)
                     cout << "September"; 
                  else if (month = 10)
                     cout << "October"; 
                  else if (month = 11)
                     cout << "November"; 
                  else 
                     cout << "December"; }
                  //Set TOEFL scores
                  void setToefl(T toef);
                  void setFirst(T f);  
                  void setSecond(T s); 
                  void setThird(T th); 
                  void setFourth(T fth); 
                  void setAdd(T sum);
                  //get TOEFL scores
                  T getToefl() const;
                  T getFirst() const;
                  T getSecond() const;
                  T getThird() const;
                  T getFourth() const;
                  T getAdd() const;
                  //Class declarations for grade point average
                  //set the gpa 
                  void setScore(float sc)
                  { score = sc; }
                  //return gpa
                  float getScore() const
                  { return score; }
                  //sum the gpa's
                  void setSum(float s)
                  { sum = s; }
                  //return sum
                  float getSum() const
                  { return sum; }
                  //total the gpa's
                  void setTotal(float tot)
                  { total = tot; }
                  //return total
                  float getTotal() const
                  { return total; }
                  //set the average gpa
                  void setAverage(float ave)
                  { average = ave; }
                  //return average
                  float getAverage() const
                  { return average; }
                  //overload operator
                  Foreign operator + (const Foreign &right)
                  {   Foreign temp;
                      temp.add = add + right.add;
                      return temp; }
}; 
#endif
template<class T>
void Foreign<T>::setLicense(T lic)
{ license = lic; }
template<class T>
T Foreign<T>::getLicense() const
{ return license; }
template<class T>
void Foreign<T>::setToefl(T toef)
{ toefl = toef; }
template<class T>
T Foreign<T>::getToefl()const
{ return toefl; }
template<class T>
void Foreign<T>::setFirst(T f)
{ first2 = f; }
template<class T>
T Foreign<T>::getFirst()const
{ return first2; }
template<class T>
void Foreign<T>::setSecond(T s)
{ second = s; }
template<class T>
T Foreign<T>::getSecond()const
{ return second; }
template<class T>
void Foreign<T>::setThird(T th)
{ third = th; }
template<class T>
T Foreign<T>::getThird()const
{ return third; }
template<class T>
void Foreign<T>::setFourth(T fth)
{ fourth = fth; }
template<class T>
T Foreign<T>::getFourth()const
{ return fourth; }
template<class T>
void Foreign<T>::setAdd(T sum)
{ add = sum; }
template<class T>
T Foreign<T>::getAdd() const
{ return add; }
template<class T>
void Foreign<T>::setCitizen(char cit)
{ citizen = cit; }
template<class T>
void Foreign<T>::setDocument(char doc)
{ document = doc; }
template<class T>
void Foreign<T>::setMonth(char m)
{ month = m; }
