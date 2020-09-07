#pragma once
#include<iostream>
using namespace std;

class Date {
public:
	Date();
	Date(int year, int month, int day);

	void NextDay(int n);
	void SetDate(int year, int month, int day);

	int getYear() const;
	int getMonth() const;
	int getDay() const;
	static int DaysInMonth(int year, int month);

private:
	static int GetDaysInYear(int year);
	static int ComputeDaysFromYearStart(int year, int month, int day);

	int year_, month_, day_;
};

ostream& operator << (ostream& os, const Date& c);
istream& operator >> (istream& is, Date& c);

