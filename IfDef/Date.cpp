#include "Date.h"

void PrintDate(const MyDate& dt)
{
	cout << "Day: " << dt.day << endl;

}

void CinDate(MyDate& dt)
{
	cout << "¬ведите день: " << endl;
	cin >> dt.day ;
}
