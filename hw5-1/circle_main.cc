#include<iostream>
#include "circle.h"
using namespace std;

int main(void){
    double r;
    cin >> r;
    cout.precision(6);
    cout << "Perimeter: " << fixed <<  getCirclePerimeter(r) << endl;
    cout << "Area: " << fixed << getCircleArea(r) << endl;

    return 0;
}
