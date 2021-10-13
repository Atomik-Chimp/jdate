// jdate.cpp : Defines the entry point for the console application.
//
// Working up a basic date class.  This is basicly working, although I haven't gone through
//  it extensively (what's that december date?)

#include "stdafx.h"

#include "date.h"		// includes the date class we are using

// Function InputaDate() Returns a pointer to a date Version 1
Date *InputaDate(){

	Date *Read_Date;
	int month, day, year;
	
	// Read in a Month from the Keyboard
	std::cout << "Enter the Month: ";
	std::cin >> month;
		// Check it for Errors

	// Read in a Day from the Keyboard
	std::cout << "Enter the Day: ";
	std::cin >> day;
		// Check if for Errors

	// Read in a Year from the Keyboard
	std::cout << "Enter the Year: ";
	std::cin >> year;
		// Check it for Errors

	Read_Date = new Date(month, day, year);

	// Return the Date pointer
	return Read_Date;
}

/*********************************************************************************
 * Main Function to test the Date class.                                         *
 *  Notes: This program doesn't protect from using a date pointer after that     *
 *			date has been deleted.                                               *
 *********************************************************************************/

int _tmain(int argc, _TCHAR* argv[])
{
	int pause;	// used to pause the output window at the end

	std::cout << "Notes: The date format is output as Month Day, Year" << std::endl;	// Let us know what the format was
																						// note it could be changed independantly from this statement
	// reading a date from the keyboard example (uses date3 pointer from above)
	std::cout << "Now we test reading in a date from the keyboard: " << std::endl;
	Date *mydate;
	mydate = InputaDate();		// read in a date from the keyboard
	mydate->display();			// show that date

	// keep the console open
	std::cout << "Paused, enter any key and press return to exit";		// pauses to keep the console window open
	std::cin >> pause;									// waits for a character and return to close the window
	return 0;
}

int max (int a, int b)
{
   if (a>b) return(a) ; else return (b);		// returns the maximum of two integers
}

int min (int a, int b)
{
   if (a>b) return(b); else return (a);			// returns the minimum of two integers
}

// The following test code has been removed from the main program since I got what I needed out of it


	/*   These errors are not protected against by the program:
	std::cout << std::endl;
	std::cout << "date3 has been deleted and now used below " << std::endl;
	std::cout << "OK: date3->Month is:" << date3->GetMonth() << '\n';	// *** uh-oh, date3 was deleted
	date3->SetMonth(4);									// *** sets date3 to a value after it was deleted
	std::cout << "OK: now date3->Month is:" << date3->GetMonth() << '\n';	// *** uses date3 after it was deleted
	date3->display();		// *** uses date3 after it was deleted
	std::cout << "End of date3 being used." << std::endl;
	*/


/*
	// mydate example
	Date mydate(1, 2, 1993);		// moved declaration here from the top
	mydate.display();				// print out mydate
	std::cout << "The Month of this date is: " << mydate.GetMonth() << std::endl;
	std::cout << "The Day of this date is: " << mydate.GetDay() << std::endl;
	std::cout << "The Year of this date is: " << mydate.GetYear() << std::endl;

	// date2 example
	std::cout << "date2 example" << std::endl;
	Date date2(4,12,1994);			// moved the declaration here from the top
	date2.display();				// print out date2

	// date3 examples
	std::cout << "date3 example" << std::endl;
	Date *date3;					// moved the declaration here from the top
	date3 = new Date(45,45,44545);	// create a date object and set the date3 pointer to it
									// Note this is a very strange date, and has issues 
									// But there is no error checking in the class, it just corrects it
									
	date3->display();				// print out what date3 points to
	std::cout << "OK: " << date3->GetMonth() << '\n';		// shows the month part of date3
	date3->SetMonth(4);										// sets the month part of date3
	std::cout << "OK: " << date3->GetMonth() << '\n';		// shows that the month part is changed
	delete(date3);					// deletes the date3 object

	// date6 example
	std::cout << "date6 example" << std::endl;
	Date *date6;				// declare another pointer to a date object
	date6 = new Date(1,1,1);	// creates a new date and sets date6 to it
	delete(date6);				// deletes date6 after not using it
*/

/*

	// date4 example (default date)
	Date date4;				// construct date4 object (default date)
	date4.display();		// outputs date4 which is set to the default date (uses default constructor) 

	// date5 example 
	Date date5(1,1,1);		// construct date5 object, happens to be set to the default date
	date5.SetMonth(3);		// sets the month in date5, which was default
*/



