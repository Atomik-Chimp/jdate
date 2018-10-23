
// date.cpp : Defines the date class code.
//
// date class code:
// -- Any Functions you don't want inline

#include "date.h"

// constructor definitions

// default constructor
 Date::Date (){
	month = day = year = 1;		// default constructor, sets the date to January 1, 0001
}

 // copy constructor?
Date::Date (int mn, int dy, int yr)
{
	static int days_per_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// the length of months
	// So month is an integer value between 1 and 12, it can be used to calculate the length of the month in days
	// by using month as an index to the length array above.  Maybe we could make length a function which returns
	// the number of days in a month.

	// The below code doesn't report trying to set month to an error value (no error checking really)
	month = max(1, mn);		// set the month to be something between 1 and 12?
	month = min(month,12);	// if it's less than 1, make it 1, if more than 12, make it 12
	// it does fix errors by preventing bad values to be entered, but acts silently


	day = max(1,dy);			// likewise set the day between 1 and the length of the month above
	day = min(day, days_per_month[month]);	// Note, this means that a leap day can't be done.
	
	year = max(1, yr);		// Years are only greater than 1, if it's less than 1 make it 1.

	// So our valid date range is positive dates starting at January 1, 0001, till we overflow the year int
	// (how big is an int in Visual Studio?)
}

void Date::display()
{
	// month names are set up as a string array, we could do an enumeration...
	static char *name[] = {"nothing", "January", "February", "March", "April", 
		"May", "June", "July", "August", "September", "October", 
		"November", "December" };
	
	std::cout << '\n' << name[month] << ' ' << day << "," << year << '\n';
	std::cout << "Days so far: " << DaysSoFar() << '\n';

	// output date format is: Month Day, Year

}

Date::~Date()
{
   std::cout << "Thank You for using DateLine Services and have a nice date\n";
}

int Date::DaysSoFar(){
	// shows the total number of days so far in a given year given the date
	// doesn't handle leap years correctly
	int total = 0;
	static int days_per_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// the length of months in days?
	// if we used an enumeration I think we could avoid redefining this here
	
	for (int i=1; i < month; i++)
		total += days_per_month[i];		// we might make this a code block so it's clear it goes with the for()
	total += day;
	return (total);
}

// Functions specific to the Month
int Date::GetMonth(){
	return month;	// returns the month portion of the date
}

void Date::SetMonth(int mn){
	// should we use this in the date copy constructor?
	month = max(1, mn);
	month = min(month, 12);
}

// Functions specific to the day portion
int Date::GetDay(){
	return day;		// function to return the day of the month
}

void Date::SetDay(int dy){
	// function to set the day of the month

	static int days_per_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// the length of months
	// So month is an integer value between 1 and 12, it can be used to calculate the length of the month in days
	// by using month as an index to the length array above.  Maybe we could make length a function which returns
	// the number of days in a month.

	day = max(1,dy);			// likewise set the day between 1 and the length of the month above
	day = min(day, days_per_month[month]);	// Note, this means that a leap day can't be done.
	
}

// Functions specific to the year portion
int Date::GetYear(){
	return year;	// function to return the year
}

void Date::SetYear(int yr){
	// function to set the year

	year = max(1, yr);		// Years are only greater than 1, if it's less than 1 make it 1.

	// So our valid year range is positive starting0001, till we overflow the year int
	// (how big is an int in Visual Studio?)
}

