
// header file for the date class (jdate)

#include <iostream>
#include <math.h>
#include <stdlib.h>

int max (int a, int b);		// returns the maximum of two numbers
int min (int a, int b);		// returns the minimum of two numbers

class Date
{
 public:
    Date ();
    Date ( int mn, int day, int yr);  // constructor
    void display();                   // function to display date

	// Functions specific to the month portion
    int GetMonth();			// function to return the month
    void SetMonth(int mn);	// function to return set the month

	// Functions specific to the day portion
	int GetDay();			// function to return the day of the month
	void SetDay(int dy);	// function to set the day of the month

	// Functions specific to the year portion
	int GetYear();			// function to return the year
	void SetYear(int yr);	// function to set the year

    ~Date();							// Destructor
 private:
    int month, day, year;				// where the date is actualy stored
    int DayoftheYear();					// the days from the first of the year to the date
};