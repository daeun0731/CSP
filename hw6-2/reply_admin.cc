#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
#include "reply_admin.h"
using namespace std;

ReplyAdmin::ReplyAdmin(){
    chats=new string[NUM_OF_CHAT];
}

ReplyAdmin::~ReplyAdmin(){
    delete[] chats;
}

int ReplyAdmin::getChatCount(){
	int number = 0;
	for (int i = 0; i < NUM_OF_CHAT; i++) {
		if (chats[i] == "") { break; }
		else { number++; }
	}
	return number;
}

bool ReplyAdmin::addChat(string _chat){
	int i = getChatCount();
	if (i >= 200) { return false; }
	else {
		chats[i] = _chat;
		return true;
	}
}

bool ReplyAdmin::removeChat(int _index){
	if (chats[_index] == "") { return false; }
	else {
		int n = getChatCount() - 1;
		for (int i = _index; i < n; i++) {
			chats[i] = chats[i + 1];
		}
		chats[n] = "";
		return true;
	}
}

bool ReplyAdmin::removeChat(int _start,int _end){
	if (_start >= 0 && _end < 200) {
		int removeChatCount = _end + 1 - _start;
		int n = getChatCount() - removeChatCount;
		for (int i = _start; i < n; i++) {
			chats[i] = chats[i + removeChatCount];
		}
		for (int i = n; i < 200; i++) {
			chats[i] = "";
		}
		return true;
	}
	else if (_start < 0 && _end < 200) {
		int n = getChatCount() - _end-1;
		for (int i = 0; i < n; i++) {
			chats[i] = chats[i+_end + 1];
		}
		for (int i = n; i < 200; i++) {
			chats[i] = "";
		}
		return true;
	}
	else if (_start > 0 && _end >= 200) {
		for (int i = _start; i < 200; i++) {
			chats[i] = "";
		}
		return true;
	}
	else if (_start < 0 && _end >= 200) {
		for (int i = 0; i < 200; i++) {
			chats[i] = "";
		}
		return true;
	}
	else { return false; }
}

void ReplyAdmin::printChat(){
    for (int i=0;i<getChatCount();i++){
        cout << i << " " << chats[i] << endl;
    }
}
