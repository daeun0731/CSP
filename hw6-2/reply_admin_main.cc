#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
#include "reply_admin.h"
using namespace std;

int main(void){
	ReplyAdmin RA;
    RA.addChat("Hello, Reply Administrator!");
    RA.addChat("I will be a good programmer.");
    RA.addChat("This class is awesome.");
    RA.addChat("Professor Kim is wise.");

	while (true) {
		int index1, index2;
		string inputs;
		getline(cin, inputs);

		if (inputs == "#quit") {
			return false;
		}

		else if (inputs.find("#remove") != string::npos) {
			if (inputs.find("-") == string::npos) {
				index1 = atoi(inputs.substr(8).c_str());
				RA.removeChat(index1);
			}
			else {
				int location;
				location = inputs.find("-");
				index1 = atoi((inputs.substr(8, location)).c_str());
				index2 = atoi((inputs.substr(location + 1)).c_str());
				RA.removeChat(index1, index2);
			}
		}

		else {
			RA.addChat(inputs);
		}

		RA.printChat();
	}

    return 0;
}
