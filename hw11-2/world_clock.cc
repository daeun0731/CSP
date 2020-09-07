#include "world_clock.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void WorldClock::Tick(int seconds) {
	timezone += seconds;
	int tmp;
	if (timezone >= 0) {
		tmp = timezone;
	}
	else {
		tmp = 3600 * 24 + timezone;
	}
	hr = tmp / 3600;
	tmp -= 3600 * hr;
	min = tmp / 60;
	tmp -= 60 * min;
	sec = tmp;

    cout << hr << ":" << min << ":" << sec << endl;
}

void WorldClock::SetTime(int hour, int minute, int second) {
	hr = hour;
	min = minute;
	sec = second;
	timezone = hr * 60 * 60 + min * 60 + sec;
}

int WorldClock::getHr() const {
	return hr;
}

int WorldClock::getMin() const {
	return min;
}

int WorldClock::getSec() const {
	return sec;
}

ostream& operator << (ostream& os, const WorldClock& c) {
	os << c.getHr() << ":" << c.getMin() << ":" << c.getSec();
	return os;
}

istream& operator >> (istream& is, WorldClock& c) {
	string hr_str, min_str, sec_str;
	getline(is, hr_str, ':');
	getline(is, min_str, ':');
	getline(is, sec_str);
	int hr_, min_, sec_;
	hr_ = atoi(hr_str.c_str());
	min_ = atoi(min_str.c_str());
	sec_ = atoi(sec_str.c_str());

    if (hr_>=0 && hr_<24 && min_>=0 && min_<60 && sec_>=0 && sec_<60){
        c.SetTime(hr_,min_,sec_);
        cout << c << endl;
    }

    else {
        cout << "Invalid time: " << hr_ << ":" << min_ << ":" << sec_ << endl;
    }
	return is;
}
