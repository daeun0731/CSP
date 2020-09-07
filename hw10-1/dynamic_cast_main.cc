#include "dynamic_cast.h"
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;

int main() {
	vector<B*> objects;

	while (1) {
		string cmd;
		cin >> cmd;

		if (cmd == "B") {
			objects.push_back(new B);
		}

		else if (cmd == "C") {
			objects.push_back(new C);
		}

		else if (cmd == "D") {
			objects.push_back(new D);
		}

		else if (atoi(cmd.c_str()) == 0) {
			for (int i = 0; i < objects.size(); i++) {
				C* obj1 = dynamic_cast<C*>(objects[i]);
				D* obj2 = dynamic_cast<D*>(objects[i]);
				if (obj1) {
					obj1->test_C();
				}
				else if (obj2) {
					obj2->test_D();
				}
				else {
					cout << "";
				}
			}
			for (int i = 0; i < objects.size(); i++) {
				delete objects[i];
			}
			objects.clear();

			break;
		}
	}
	return 0;
}
