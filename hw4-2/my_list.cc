#include<iostream>
#include<fstream>
#include<string>
#include<string.h> // strtok
using namespace std;

string* split(const string& str, const string& delim){
    string* string_list=new string[10];

    int idx=0;
    char * token=strtok(const_cast<char*>(str.c_str()),delim.c_str());
    while (token!=NULL){
        string_list[idx]=token;
        token=strtok(NULL,delim.c_str());
        ++idx;
    }

    return string_list;
}

struct Item {
    string name;
    string age;
    string id;
    string* subjects;
    struct Item* next;
};

struct Item* create_item(){
    struct Item* node = new struct Item;
    return node;
}

void insert_item(struct Item *prev_item, struct Item *item){
    while (prev_item->next!=NULL){
        prev_item=prev_item->next;
    }
    prev_item->next=item;
}

int main(void){
    ifstream fin;
    fin.open("input.txt");

    struct Item* headNode=NULL;
    struct Item* tailNode=NULL;
    struct Item* newNode;
    struct Item* curNode;

    while (!fin.eof()){
        newNode=create_item();

        string data;
        fin>> data;
        string* data_list=split(data,":");

        newNode->name=data_list[0];
        newNode->age=data_list[1];
        newNode->id=data_list[2];
        newNode->subjects=split(data_list[3],",");
        newNode->next=NULL;

        if (headNode==NULL){
            headNode=tailNode=newNode;
        }
        else{
            insert_item(tailNode,newNode);
        }
    }

        curNode=headNode;
        while (curNode!=NULL){
            if (curNode->id[0]=='2' && curNode->id[1]=='0' && curNode->id[2]=='1' && curNode->id[3]=='3'){
                cout << curNode->name << "(" << curNode->id << "): ";
                int i=0;
                while (curNode->subjects[i]!="\0"){
                    if (curNode->subjects[i+1]=="\0" || i==9){
                        cout << curNode->subjects[i] <<endl;
                    }
                    else{
                        cout << curNode->subjects[i] << " & ";
                    }
                    i++;
                }
            }
            curNode=curNode->next;
        }


    fin.close();
    return 0;
}
