#include<string>
using namespace std;

class A {
    private:
        int* memberA;
    public:
        A();
        A(int a);
        virtual ~A();
        virtual void print();
};

class B:public A {
    private:
        double* memberB;
    public:
        B();
        B(double b);
        ~B();
        void print();
};

class C:public B {
    private:
        string* memberC;
    public:
        C();
        C(string c);
        ~C();
        void print();
};

