#include "shapes.h"

Shape::Shape(double width, double height){
    w=width;
    h=height;
}

Triangle::Triangle(double width, double height):Shape(width,height){}

Rectangle::Rectangle(double width, double height):Shape(width,height){}

double Triangle::getArea(){
    return w*h*0.5;
}

double Rectangle::getArea(){
    return w*h;
}
