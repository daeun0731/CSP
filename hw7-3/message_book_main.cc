#include"message_book.h"
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<stdlib.h>
using namespace std;

int main() {
	MessageBook M1;
	string str;

	while (1) {
		string cmd, msg;
		int num;
		cin >> cmd;

		if (cmd=="quit") {
			break;
		}

		else if (cmd=="list"){
			vector<int> v = M1.GetNumbers();
			vector<int>::iterator it;
			for (it = v.begin(); it != v.end(); it++) {
				cout << *it << ": " << M1.GetMessage(*it) << endl;
			}
		}

		else {
			if (cmd == "print") {
				cin >> num;
				cout << M1.GetMessage(num) << endl;
			}

			else if (cmd == "add") {
				cin >> num;
				string msg_input;
				getline(cin, msg_input);
				msg = msg_input.substr(1);
				M1.AddMessage(num, msg);
			}
			
			else if (cmd == "delete") {
				cin >> num;
				M1.DeleteMessage(num);
			}
		}
	}	
	return 0;
}
