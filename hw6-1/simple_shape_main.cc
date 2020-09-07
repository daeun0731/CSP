#include<iostream>
#include "simple_shape.h"
using namespace std;

int main(void){
    while (1) {
        cout << "shape?" << endl;

        char a;
        cin >> a;

        if (a=='C') {
            CCircle C1;
            cin >> C1.x >> C1.y >> C1.r;
            cout << "area: " << C1.getArea() << ", perimeter: " << C1.getPerimeter() << endl;
        }

        else if (a=='R'){
            CRectangle R1;
            cin >> R1.x1 >> R1.y1 >> R1.x2 >> R1.y2;
            cout << "area: " << R1.getArea() << ", perimeter: " << R1.getPerimeter() << endl;
        }

        else if (a=='Q'){
            break;
        }

        cout << endl;
    }

    return 0;
}
