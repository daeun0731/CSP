#include "simple_int_set.h"
#include<iostream>
#include<sstream>
#include<string>
#include<string.h>
#include<stdlib.h>

int main(void) {
	while (1) {
		string init;
		cin >> init;

		if (init == "{") {
			set<int> set0;
			set<int> set1;

			string str0;
			string str1;

			getline(cin, str0, '}');

			string buffer0;
			stringstream ss0(str0);

			while (ss0 >> buffer0) {
				set0.insert(atoi(buffer0.c_str()));
			}

			string OP;
			cin >> OP;

			getline(cin, str1, '}');

			string buffer1;
			stringstream ss1(str1);

			while (ss1 >> buffer1) {
				if (buffer1 != "{") {
					set1.insert(atoi(buffer1.c_str()));
				}
			}

			set<int> result;
			if (OP == "+") {
				result=SetUnion(set0, set1);
			}

			else if (OP == "-") {
				result = SetDifference(set0, set1);
			}

			else {
				result = SetIntersection(set0, set1);
			}

			set<int>::iterator iter;
			cout << "{ ";
			for (iter = result.begin(); iter != result.end(); iter++) {
				cout << *iter << " ";
			} 
			cout << "}" << endl;
		}
		else {
			break;
		}
	}
	return 0;
}
