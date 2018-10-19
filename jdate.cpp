// jdate.cpp : Defines the entry point for the console application.
// Working up a basic date class.  This is basicly working, although I haven't gone through
//  it extensively (what's that december date?)

#include "stdafx.h"

#include "date.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int pause;

	Date mydate(1, 2, 1993);
	Date date2(4,12,1994);
	Date date4;
	Date *date3;
	Date *date6;
	Date date5(1,1,1);

	date3 = new Date(45,45,44545);

	mydate.display();
	date2.display();
	date3->display();

	std::cout << "OK: " << date3->GetMonth() << '\n';
	date3->SetMonth(4);
	std::cout << "OK: " << date3->GetMonth() << '\n';

	delete(date3);
	date6 = new Date(1,1,1);

	std::cout << "OK: " << date3->GetMonth() << '\n';
	date3->SetMonth(4);
	std::cout << "OK: " << date3->GetMonth() << '\n';

	date3->display();
   
	date4.display();

	date5.SetMonth(3);
	delete(date6);

	std::cout << "Paused, enter any key to exit";
	std::cin >> pause;
	return 0;
}



int max (int a, int b)
{
   if (a>b) return(a) ; else return (b);
}

int min (int a, int b)
{
   if (a>b) return(b); else return (a);
}


