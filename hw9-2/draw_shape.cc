#include "draw_shape.h"
#include<iostream>
#include<string>
using namespace std;

Canvas::Canvas(int row, int col){
	row_ = row;
	col_ = col;
	arr = new char*[col];
	for (int i = 0; i < col; i++) {
		arr[i] = new char[row];
	}
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = '.';
		}
	}
}

Canvas::~Canvas(){
	for (int i = 0; i < col_; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

void Canvas::Resize(int w, int h){
	char** tmp = new char*[h];
	for (int i = 0; i < h; i++) {
		tmp[i] = new char[w];
	}

	for (int i = 0; i < col_; i++) {
		for (int j = 0; j < row_; j++) {
			tmp[i][j] = arr[i][j];
		}
	}

	for (int i = 0; i < col_; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	arr = tmp;

	row_ = w;
	col_ = h;
}

bool Canvas::DrawPixel(int x, int y, char brush){
	if (x < row_ && y < col_) {
		arr[y][x] = brush;
		return true;
	}
	else {
		return false;
	}
}

void Canvas::Print(){
	cout << " ";
	for (int i = 0; i < row_; i++) {
		int num;
		num = i;
		while (num >= 10) {
			num -= 10;
		}
		cout << num;
	}
	cout << endl;
	for (int i = 0; i < col_; i++) {
		int num;
		num = i;
		while (num >= 10) {
			num -= 10;
		}
		cout << num;
		for (int j = 0; j < row_; j++) {
			cout << arr[i][j];	
		}
		cout << endl;
	}
}

void Canvas::Clear(){
	for (int i = 0; i < col_; i++) {
		for (int j = 0; j < row_; j++) {
			arr[i][j] = '.';
		}
	}
}

Shape::Shape(int x_, int y_, char brush_, string name_){
	x = x_;
	y = y_;
	brush = brush_;
	name = name_;
}

Shape::~Shape(){}

Rectangle::Rectangle(int x_, int y_, char brush_, int rect_w_, int rect_h_,string name_) : Shape(x_, y_, brush_,name_), rect_w(rect_w_), rect_h(rect_h_) {}

Rectangle::~Rectangle() {}

void Rectangle::Draw(Canvas* canvas) {
	for (int i = y; i < y + rect_h; i++) {
		for (int j = x; j < x + rect_w; j++) {
			canvas->DrawPixel(j, i, brush);
		}
	}
}

void Rectangle::getData() {
	cout << name << " " << x << " " << y << " " << rect_w << " " << rect_h << " " << brush << endl;
}

UpTriangle::UpTriangle(int x_, int y_, char brush_, int tri_h_, string name_) : Shape(x_, y_, brush_,name_), tri_h(tri_h_) {}

UpTriangle::~UpTriangle() {}

void UpTriangle::Draw(Canvas* canvas) {
	int m, n;
	m = x;
	n = 0;
	for (int i = y; i < y + tri_h; i++) {
		for (int j = m; j <= m + n; j++) {
			canvas->DrawPixel(j, i, brush);
		}
		m--;
		n += 2;
	}
}

void UpTriangle::getData() {
	cout << name << " " << x << " " << y << " " << tri_h << " " << brush << endl;
}

DownTriangle::DownTriangle(int x_, int y_, char brush_, int tri_h_, string name_) : Shape(x_, y_, brush_,name_), tri_h(tri_h_) {}

DownTriangle::~DownTriangle() {}

void DownTriangle::Draw(Canvas* canvas) {
	int m, n;
	m = x - tri_h + 1;
	n = 2 * tri_h - 1;
	for (int i = y-tri_h+1; i <=y; i++) {
		for (int j = m; j < m+n; j++) {
			canvas->DrawPixel(j, i, brush);
		}
		m++;
		n -= 2;
	}
}

void DownTriangle::getData() {
	cout << name << " " << x << " " << y << " " << tri_h << " " << brush << endl;
}

Diamond::Diamond(int x_, int y_, char brush_, int dia_d_, string name_) : Shape(x_, y_, brush_,name_), dia_d(dia_d_) {}

Diamond::~Diamond() {}

void Diamond::Draw(Canvas* canvas) {
	int m, n;
	m = x;
	n = 0;
	for (int i = y; i < y + dia_d; i++) {
		for (int j = m; j <= m + n; j++) {
			canvas->DrawPixel(j, i, brush);
		}
		m--;
		n += 2;
	}
	for (int i = y + dia_d; i <= y + 2 * dia_d; i++) {
		for (int j = m; j <= m + n; j++) {
			canvas->DrawPixel(j, i, brush);
		}
		m++;
		n -= 2;
	}
}

void Diamond::getData() {
	cout << name << " " << x << " " << y << " " << dia_d << " " << brush << endl;
}
