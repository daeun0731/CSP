#include "print_member.h"
#include<iostream>
#include<vector>

int main(void) {
	int int_;
	double double_;
	string string_;

	cin >> int_ >> double_ >> string_;

	vector<A*> objects(3);

	objects[0] = new A(int_);
	objects[1] = new B(double_);
	objects[2] = new C(string_);

	for (int i = 0; i < 3; i++) {
		objects[i]->print();
	}

	for (int i = 0; i < 3; i++) {
		delete objects[i];
	}

	return 0;
}
