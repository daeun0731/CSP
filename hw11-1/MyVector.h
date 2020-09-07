#pragma once
#include<iostream>
using namespace std;

class MyVector {
    private:
        int len;
        int* arr;
    public:
        MyVector();
        MyVector(int len_);
        MyVector(int len_,int* arr_);
        ~MyVector();
        MyVector operator+(const MyVector& a);
        MyVector operator+(const int a);
        friend ostream& operator << (ostream& out, const MyVector& b);
        friend istream& operator >> (istream& in, MyVector& b);
};
