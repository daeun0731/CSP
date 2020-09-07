#include "world_clock.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
	WorldClock wc;
	
	while (true) {
		string str;
		cin >> str;
		if (str == "quit") {
			break;
		}
		if (str == "set") {
			cin >> wc;
		}
		else if (str == "tick") {
			int t;
			cin >> t;
			wc.Tick(t);
		}
	}
	return 0;
}
