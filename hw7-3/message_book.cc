#include "message_book.h"
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<stdlib.h>
using namespace std;

MessageBook::MessageBook(){}
MessageBook::~MessageBook(){}

void MessageBook::AddMessage(int number, const string & message) {
	if (messages_.count(number)==0) {
		messages_.insert(make_pair(number, message));
	}
	else {	
		messages_[number] = message;
	}
}

void MessageBook::DeleteMessage(int number) {
	messages_.erase(number);
}

vector<int> MessageBook::GetNumbers() const {
	vector<int> vec;
	for (map<int,string>::const_iterator iter = messages_.begin(); iter != messages_.end(); iter++) {
		vec.push_back(iter->first);
	}
	return vec;
}

const string& MessageBook::GetMessage(int number) const {
	return messages_.find(number)->second;
}
