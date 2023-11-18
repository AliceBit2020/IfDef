#pragma once
#include <iostream>


using namespace std;


struct MyDate
{
	char name[20];
	int day;
	int month;
	int year;


};

void PrintDate(const MyDate& dt);