
// header file for the date class (jdate)

#include <iostream>
#include <math.h>
#include <stdlib.h>

int max (int a, int b);
int min (int a, int b);

class Date
{
 public:
    Date ();
    Date ( int mn, int day, int yr);  // constructor
    void display();                   // function to display date
    int GetMonth();
    void SetMonth(int mn);
    ~Date();
 private:
    int month, day, year;
    int DaysSoFar();
};