
// date class code:
// -- Any Functions you don't want inline

#include "date.h"

// constructor definitions

// basic constructor
 Date::Date (){
	month = day = year = 1;	
}

 // copy constructor?
Date::Date (int mn, int dy, int yr)
{
   static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   month = max(1, mn);
   month = min(month,12);

   day = max(1,dy);
   day = min(day, length[month]);

   year = max(1, yr);
}

void Date::display()
{
   static char *name[] = {"nothing", "January", "February", "March", "April",
            "May", "June", "July", "August", "September", "October",
            "November", "December" };

   std::cout << '\n' << name[month] << ' ' << day << "," << year << '\n';
   std::cout << "Days so far: " << DaysSoFar() << '\n';
}

Date::~Date()
{
   std::cout << "Thank You for using DateLine Services and have a nice date\n";
}

int Date::DaysSoFar()
{
   int total = 0;
   static int length[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   for (int i=1; i < month; i++) total += length[i];
   total += day;
   return (total);
}

int Date::GetMonth()
{
   return month;
}

void Date::SetMonth(int mn)
{
   month = max(1, mn);
   month = min(month, 12);
}

