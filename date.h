
// header file for the date class (jdate)

#include <iostream>
#include <math.h>
#include <stdlib.h>

int max (int a, int b);		// returns the maximum of two numbers
int min (int a, int b);		// returns the minimum of two numbers


// noticed there is a bunch missing from this implimentation, what about setting or getting a year or day?
class Date
{
 public:
    Date ();
    Date ( int mn, int day, int yr);  // constructor
    void display();                   // function to display date
    int GetMonth();						// function to return the month
    void SetMonth(int mn);				// function to return set the month
    ~Date();							// Destructor
 private:
    int month, day, year;				// where the date is actualy stored
    int DaysSoFar();					// the days from the first of the year to the date
};