#include "calendar.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main() {
	Date date;

	while (true) {
		string cmd;
		cin >> cmd;
		if (cmd == "quit") {
			break;
		}
		else if (cmd == "set") {
			cin >> date;
		}
		else if (cmd.find("next")>=0) {
			if (cmd.find("day")==string::npos) {
				int num;
				num = atoi(cmd.substr(5).c_str());
				date.NextDay(num);
			}
			else {
				date.NextDay(1);
			}
			cout << date << endl;
		}
	}
	return 0;
}
