#include "print_shape.h"

Circle::Circle(double radius){
    radius_=radius;
}

double Circle::getArea(){
    return PI*radius_*radius_;
}

double Circle::getPerimeter(){
    return 2*PI*radius_;
}

string Circle::getTypeString(){
    return "Circle";
}

Rectangle::Rectangle(double width, double height){
    width_=width;
    height_=height;
}

double Rectangle::getArea(){
    return width_*height_;
}

double Rectangle::getPerimeter(){
    return 2*(width_+height_);
}

string Rectangle::getTypeString(){
    return "Rectangle";
}
