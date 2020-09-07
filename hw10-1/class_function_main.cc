#include "class_function.h"
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;

int main() {
	vector<A*> objects;

	while (1) {
		string cmd;
		cin >> cmd;

		if (cmd == "B") {
			objects.push_back(new B);
		}

		else if (cmd == "C") {
			objects.push_back(new C);
		}

		else if (cmd == "BB") {
			objects.push_back(new BB);
		}

		else if (atoi(cmd.c_str()) == 0) {
			for (int i = 0; i < objects.size(); i++) {
				objects[i]->test1();
				objects[i]->test2();
			}

			for (int i = 0; i < objects.size(); i++) {
				delete objects[i];
			}
			objects.clear();

			break;
		}
	}
}
