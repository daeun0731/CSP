#include "clock_time.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int s;
	cin >> s;

	vector<Clock*> clocks;

	clocks.push_back(new SundialClock(0, 0, 0));
	clocks.push_back(new CuckooClock(0, 0, 0));
	clocks.push_back(new GrandFatherClock(0, 0, 0));
	clocks.push_back(new WristClock(0, 0, 0));
	clocks.push_back(new AtomicClock(0, 0, 0));

	for (int i = 0; i < clocks.size(); i++) {
		clocks[i]->reset();
	}

	cout << "Reported clock times after resetting:" << endl;

	for (int i = 0; i < clocks.size(); i++) {
		clocks[i]->displayTime();
	}

	cout << endl;
	cout << "Running the clocks..." << endl;
	cout << endl;

	for (int j = 0; j < s; j++) {
		for (int i = 0; i < clocks.size(); i++) {
			clocks[i]->tick();
		}
	}

	cout << "Reported clock times after running:" << endl;
	
	for (int i = 0; i < clocks.size(); i++) {
		clocks[i]->displayTime();
		delete clocks[i];
	}
	clocks.clear();

	return 0;
}
