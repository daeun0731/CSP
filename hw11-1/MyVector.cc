#include "MyVector.h"
#include<iostream>
using namespace std;

MyVector::MyVector(){}

MyVector::MyVector(int len_){
    len=len_;
    arr=new int[len_];
}

MyVector::MyVector(int len_,int* arr_){
    len=len_;
    arr=new int[len];
    for (int i=0;i<len;i++){
        arr[i]=arr_[i];
    }
}

MyVector::~MyVector(){
    delete[] arr;
}

MyVector MyVector::operator+(const MyVector& a){
    MyVector answer(len);
    for (int i=0;i<len;i++){
        answer.arr[i]=arr[i]+a.arr[i];
    }
    return MyVector(answer.len, answer.arr);
}

MyVector MyVector::operator+(const int a){
    MyVector answer(len);
    for (int i=0;i<len;i++){
        answer.arr[i]=arr[i]+a;
    }
    return MyVector(answer.len, answer.arr);
}

ostream& operator << (ostream& out, const MyVector& b){
    for (int i=0;i<b.len;i++){
        out << b.arr[i] << " ";
    }
    return out;
}

istream& operator >> (istream& in, MyVector& b){
    for (int i=0;i<b.len;i++){
        in >> b.arr[i];
    }
    return in;
}
