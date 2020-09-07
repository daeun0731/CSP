#include "Animals.h"
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;

int main() {
	vector<Animal*> animals;
	string cmd;
	string name_input, favoriteToy_input;
	int age_input, numStripes_input;

	while (1) {
		cin >> cmd;
		if (cmd == "z") {
			cin >> name_input >> age_input >> numStripes_input;
			animals.push_back(new Zebra(name_input, age_input, numStripes_input));
		}

		else if (cmd == "c") {
			cin >> name_input >> age_input >> favoriteToy_input;
			animals.push_back(new Cat(name_input, age_input, favoriteToy_input));
		}

		else if (atoi(cmd.c_str()) == 0) {
			for (int i = 0; i < animals.size(); i++) {
				animals[i]->printInfo();
			}
			for (int i = 0; i < animals.size(); i++) {
				delete animals[i];
			}
			animals.clear();

			break;
		}
	}

	return 0;
}
