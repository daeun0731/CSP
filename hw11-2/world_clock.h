#pragma once
#include<iostream>
using namespace std;

class WorldClock {
public:
	void Tick(int seconds);
	void SetTime(int hour, int minute, int second);
	int getHr() const;
	int getMin() const;
	int getSec() const;

private:
	int timezone;
	int hr, min, sec;
};

ostream& operator << (ostream& os, const WorldClock& c);

istream& operator >> (istream& is, WorldClock& c);

