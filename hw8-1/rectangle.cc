#include "rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(){}

Rectangle::Rectangle(int width, int height){
    w=width;
    h=height;
    cout << w << " " << h << endl;
}

int Rectangle::getArea(){
    area=w*h;
    return area;
}

int Rectangle::getPerimeter(){
    perimeter=2*(w+h);
    return perimeter;
}

Square::Square(int width) : Rectangle(width,width) {}

void Square::print(){
    cout << w << "x" << h << " Square" << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}

NonSquare::NonSquare(int width, int height) : Rectangle(width,height) {}

void NonSquare::print(){
    cout << w << "x" << h << " NonSquare" << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}
