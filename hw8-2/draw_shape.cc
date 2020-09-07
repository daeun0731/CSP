#include "draw_shape.h"
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

Shape::Shape() {}

Shape::Shape(int x, int y, string brush){
	x_ = x;
	y_ = y;
	brush_ = brush;
}

int Shape::GetArea(){}
double Shape::GetPerimeter(){}
void Shape::Draw(int canvas_width, int canvas_height){}

Square::Square(int s, int x, int y, string brush) : Shape(x, y, brush), s_(s) {}

int Square::GetArea() {
	return s_ * s_;
}

double Square::GetPerimeter() {
	return 4 * s_;
}
	
void Square::Draw(int canvas_width, int canvas_height) {
	cout << "Area: " << GetArea() << endl;
	cout << "Perimeter: " << GetPerimeter() << endl;

	string** square_arr = new string*[canvas_height];
	for (int i = 0; i < canvas_height; i++) {
		square_arr[i] = new string[canvas_width];
	}

	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			square_arr[i][j] = ".";
		}
	}

	for (int i = y_; i < y_ + s_; i++) {
		if (i >= canvas_height) { break; }
		for (int j = x_; j < x_ + s_; j++) {
			if (j >= canvas_width) { break; }
			square_arr[i][j] = brush_;
		}
	}
	
	cout << " ";
	for (int i = 0; i < canvas_width; i++) {
		cout << i;
	}
	cout << endl;
	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
			cout << square_arr[i][j];
		}
		cout << endl;
	}
}

Rectangle::Rectangle(int h, int w, int x, int y, string brush) : Shape(x, y, brush), h_(h), w_(w) {}

int Rectangle::GetArea() {
	return h_ * w_;
}

double Rectangle::GetPerimeter() {
	return 2 * (h_ + w_);
}

void Rectangle::Draw(int canvas_width, int canvas_height) {
	cout << "Area: " << GetArea() << endl;
	cout << "Perimeter: " << GetPerimeter() << endl;

	string** rect_arr = new string*[canvas_height];
	for (int i = 0; i < canvas_height; i++) {
		rect_arr[i] = new string[canvas_width];
	}

	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			rect_arr[i][j] = ".";
		}
	}

	for (int i = y_; i < y_ + h_; i++) {
		if (i >= canvas_height) { break; }
		for (int j = x_; j < x_ + w_; j++) {
			if (j >= canvas_width) { break; }
			rect_arr[i][j] = brush_;
		}
	}

	cout << " ";
	for (int i = 0; i < canvas_width; i++) {
		cout << i;
	}
	cout << endl;
	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
	        cout << rect_arr[i][j];
        }
    cout << endl;
    }
}

Diamond::Diamond(int d,int x, int y, string brush) : Shape(x, y, brush), d_(d) {}

int Diamond::GetArea() {
	return 2 * d_*d_;
}

double Diamond::GetPerimeter() {
	return 4*sqrt(d_*d_ + d_ * d_);
}

void Diamond::Draw(int canvas_width, int canvas_height) {
	cout << "Area: " << GetArea() << endl;
	cout << "Perimeter: " << GetPerimeter() << endl;

	string** diamond_arr = new string*[canvas_height];
	for (int i = 0; i < canvas_height; i++) {
		diamond_arr[i] = new string[canvas_width];
	}

	for (int i = 0; i < canvas_height; i++) {
		for (int j = 0; j < canvas_width; j++) {
			diamond_arr[i][j] = ".";
		}
	}

	int m, n;
	m = x_;
	n = 0;
	for (int i = y_; i < y_ + d_; i++) {
		if (i >= canvas_height) { break; }
		for (int j = m; j <= m+n; j++) {
			if (j >= canvas_height) { break; }
			diamond_arr[i][j] = brush_;
		}
		m--;
		n += 2;
	}
	for (int i = y_ + d_; i <= y_ + 2 * d_; i++) {
		if (i >= canvas_height) { break; }
		for (int j = m; j <= m + n; j++) {
			if (j >= canvas_height) { break; }
			diamond_arr[i][j] = brush_;
		}
		m++;
		n -= 2;
	}

	cout << " ";
	for (int i = 0; i < canvas_width; i++) {
		cout << i;
	}
	cout << endl;
	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
			cout << diamond_arr[i][j];
		}
		cout << endl;
	}
}
