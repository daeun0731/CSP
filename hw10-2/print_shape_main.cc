#include "print_shape.h"
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<stdio.h>

int main() {
	vector<Shape*> shapes;
	double area, perimeter;
	while (1) {
		string cmd;
		cin >> cmd;
		if (cmd == "c") {
			double radius_input;
			cin >> radius_input;
			shapes.push_back(new Circle(radius_input));
		}
		else if (cmd == "r") {
			double width_input, height_input;
			cin >> width_input >> height_input;
			shapes.push_back(new Rectangle(width_input, height_input));
		}
		else if (atoi(cmd.c_str()) == 0) {
			for (int i = 0; i < shapes.size(); i++) {
				cout << shapes[i]->getTypeString() << ", ";
				area = shapes[i]->getArea();
				perimeter = shapes[i]->getPerimeter();
				printf("%.12g, %.12g\n", area, perimeter);
				delete shapes[i];
			}
			shapes.clear();
			break;
		}
	}
	return 0;
}
