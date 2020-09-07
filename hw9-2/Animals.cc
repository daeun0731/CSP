#include "Animals.h"
#include<iostream>
#include<string>
using namespace std;

Animal::Animal(string name_, int age_) {
	name = name_;
	age = age_;
}
	
Zebra::Zebra(string name_, int age_, int numStripes_) : Animal(name_, age_), numStripes(numStripes_) {}

void Zebra::printInfo() {
	cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;
}

Cat::Cat(string name_, int age_, string favoriteToy_) : Animal(name_, age_), favoriteToy(favoriteToy_) {}

void Cat::printInfo() {
	cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << endl;
}
