#pragma once
#include<string>
using namespace std;

class Animal {
    protected:
        string name;
        int age;
    public:
        Animal(string name_, int age_);
        virtual void printInfo()=0;
};

class Zebra:public Animal {
    private:
        int numStripes;
    public:
        Zebra(string name_, int age_, int numStripes);
        void printInfo();
};

class Cat:public Animal {
    private:
        string favoriteToy;
    public:
        Cat(string name_, int age_, string favoriteToy_);
        void printInfo();
};
