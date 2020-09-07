#include<string>
using namespace std;

class A {
    public:
        virtual string getTypeInfo();
};

class B:public A {
    public:
        string getTypeInfo();
};

class C:public B {
    public:
        string getTypeInfo();
};

void printObjectTypeInfo1(A* object);

void printObjectTypeInfo2(A& object);
