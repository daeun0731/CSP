#include "calendar.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

Date::Date() {}

Date::Date(int year, int month, int day) {
	SetDate(year, month, day);
}

void Date::NextDay(int n) {
	int days;
	days = ComputeDaysFromYearStart(year_, month_, day_) + n;

	if (days < 0) {
		year_--;
		days += GetDaysInYear(year_);
		for (int i = 1; i < 13; i++) {
			if (days <= DaysInMonth(year_, i)) {
				month_ = i;
				day_ = days;
				break;
			}
			else { days -= DaysInMonth(year_, i); }
		}
	}

	else if (days > GetDaysInYear(year_)) {
		days -= GetDaysInYear(year_);
		year_++;
		for (int i = 1; i < 13; i++) {
			if (days <= DaysInMonth(year_, i)) {
				month_ = i;
				day_ = days;
				break;
			}
			else { days -= DaysInMonth(year_, i); }
		}
	}

	else {
		for (int i = 1; i < 13; i++) {
			if (days <= DaysInMonth(year_, i)) { 
				month_ = i;
				day_ = days;
				break;
			}
			else { days -= DaysInMonth(year_, i); }
		}
	}
}

void Date::SetDate(int year, int month, int day) {
	year_ = year;
	month_ = month;
	day_ = day;
}

int Date::getYear() const {
	return year_;
}

int Date::getMonth() const {
	return month_;
}
int Date::getDay() const {
	return day_;
}

int Date::DaysInMonth(int year, int month) {
	if (GetDaysInYear(year) == 366) {
		if (month == 2) {
			return 29;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11 ) {
			return 30;
		}
		else {
			return 31;
		}
	}
	else {
		if (month == 2) {
			return 28;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11) {
			return 30;
		}
		else {
			return 31;
		}
	}
}

int Date::GetDaysInYear(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {return 366;}
	else {return 365;}
}
int Date::ComputeDaysFromYearStart(int year, int month, int day) {
	int days = 0;
	for (int i = 1; i < month; i++) {
		days += DaysInMonth(year, i);
	}
	days += day;
	return days;
}


ostream& operator << (ostream& os, const Date& c) {
	os << c.getYear() << "." << c.getMonth() << "." << c.getDay();
	return os;
}

istream& operator >> (istream& is, Date& c) {
	string year_str, month_str, day_str;
	getline(is, year_str, '.');
	getline(is, month_str, '.');
	getline(is, day_str);
	int year_int, month_int, day_int;
	year_int = atoi(year_str.c_str());
	month_int = atoi(month_str.c_str());
	day_int = atoi(day_str.c_str());

	if (year_int >= 1 && month_int >= 1 && month_int <= 12 && day_int >= 1 && day_int <= c.DaysInMonth(year_int, month_int)) {
		c.SetDate(year_int, month_int, day_int);
		cout << c << endl;
	}

	else {
		cout << "Invalid date: " << year_int << "." << month_int << "." << day_int << endl;
	}

	return is;
}
