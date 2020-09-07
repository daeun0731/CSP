#include "dynamic_cast.h"
#include<iostream>
using namespace std;

B::~B(){}

void C::test_C(){
    cout << "C::test_C()" << endl;
}

void D::test_D(){
    cout << "D::test_D()" << endl;
}
