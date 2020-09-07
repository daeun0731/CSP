#include "simple_shape.h"

double CCircle::getArea(){
    return PI * r * r;
}

double CCircle::getPerimeter(){
    return 2 * PI  * r;
}

double CRectangle::getArea(){
    return (x2-x1) * (y1-y2);
}

double CRectangle::getPerimeter(){
    return 2 * (x2-x1+y1-y2);
}
