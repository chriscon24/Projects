#ifndef FEETINCHES_H
#define FEETINCHES_H
// The FeetInches class holds distances or measurements
// expressed in feet and inches.
class FeetInches{
    private:
        int feet; 
        int inches; 
void simplify(); 
    public:
        FeetInches(int f = 0, int i = 0)
        { feet = f;
          inches = i;
          simplify(); }
          
        void setFeet(int f)
        { feet = f; }
        void setInches(int i)
        { inches = i;
          simplify(); }
        
        int getFeet() const
        { return feet; }
        int getInches() const
        { return inches; }
        
        // Overloaded operator functions
        bool operator > (const FeetInches &);
        bool operator < (const FeetInches &); 
        bool operator == (const FeetInches &); 
};
#endif

void FeetInches::simplify(){
    if (inches >= 12){
    feet += (inches / 12);
    inches = inches % 12;}
    else if (inches < 0){
    feet -= ((abs(inches) / 12) + 1);
    inches = 12 - (abs(inches) % 12);}
}
bool FeetInches::operator > (const FeetInches &right){
    bool status;
    if (feet > right.feet)
       status = true;
    else if (feet == right.feet && inches > right.inches)
         status = true;
    else
        status = false;
    return status;
}
bool FeetInches::operator < (const FeetInches &right){
    bool status;
    if (feet < right.feet)
       status = true;
    else if (feet == right.feet && inches < right.inches)
         status = true;
    else
        status = false;
    return status;
}
bool FeetInches::operator == (const FeetInches &right){
    bool status;
    if (feet == right.feet && inches == right.inches)
       status = true;
    else
        status = false;
    return status;
}
