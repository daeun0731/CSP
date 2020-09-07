#include "shapes.h"
#include<iostream>
#include<vector>
using namespace std;

int main() {
	double tri_w, tri_h, rect_w, rect_h;
	cin >> tri_w >> tri_h >> rect_w >> rect_h;

	vector<Shape*> shapes(2);

	shapes[0] = new Triangle(tri_w, tri_h);
	shapes[1] = new Rectangle(rect_w, rect_h);

	for (int i = 0; i < shapes.size(); i++) {
		cout << shapes[i]->getArea() << endl;
		delete shapes[i];
	}
	shapes.clear();

	return 0;
}
