#include "string.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

MyString::MyString(){
    len=0;
    arr=NULL;
}

MyString::MyString(const char* arr_){
    len=(int)strlen(arr_)+1;
    arr=new char[len];
    strcpy(arr,arr_);
}

MyString::~MyString(){}

MyString MyString::operator+(const MyString& a){
	int len_;
	len_ = len + a.len - 1;
	char* tmp = new char[len_];
	strcpy(tmp, arr);
	strcat(tmp, a.arr);
	MyString answer(tmp);
	delete[] tmp;
	return answer;

}

MyString MyString::operator*(const int a){
	int len_;
	len_ = len * a - (a - 1);
	char* tmp = new char[len_];
	strcpy(tmp, arr);
	for (int i = 1; i < a; i++) {
		strcat(tmp, arr);
	}
	MyString answer(tmp);
	delete[] tmp;
	return answer;
}

ostream& operator << (ostream& out, const MyString& b){
	out << b.arr;
	return out;
}

istream& operator >> (istream& in, MyString& b){
	char* tmp = new char[10000];
	in >> tmp;
	b.len = strlen(tmp) + 1;
	b.arr = new char[b.len];

	strcpy(b.arr, tmp);
	delete[] tmp;

	return in;
}
