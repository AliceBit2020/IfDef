#include "Date.h"

void PrintDate(const MyDate& dt)
{
	cout << "Day: " << dt.day << endl;

}

void CinDate(MyDate& dt)
{
	cout << "������� ����: " << endl;
	cin >> dt.day ;
}
