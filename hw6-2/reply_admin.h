#pragma once
#include<string>
#include<string.h>
#define NUM_OF_CHAT 200
using namespace std;

class ReplyAdmin {
    private:
        string* chats;
    public:
        ReplyAdmin();
        ~ReplyAdmin();
        int getChatCount();
        bool addChat(string _chat);
        bool removeChat(int _index);
        bool removeChat(int _start, int _end);
        void printChat();
};
