#include "draw_shape.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<Shape*> shapes;

	int row, col;
	cin >> row >> col;
	Canvas canvas(row, col);
	canvas.Print();

	while (true) {
		string tok;
		cin >> tok;
		if (tok == "add") {
			string type;
			cin >> type;

			if (type == "rect") {
				int x_input, y_input, rect_w_input, rect_h_input;
				char brush_input;
				cin >> x_input >> y_input >> rect_w_input >> rect_h_input >> brush_input;
				shapes.push_back(new Rectangle(x_input, y_input, brush_input, rect_w_input, rect_h_input, "rect"));
			}

			else if (type == "tri_up") {
				int x_input, y_input, tri_h_input;
				char brush_input;
				cin >> x_input >> y_input >> tri_h_input >> brush_input;
				shapes.push_back(new UpTriangle(x_input, y_input, brush_input, tri_h_input, "tri_up"));
			}

			else if (type == "tri_down") {
				int x_input, y_input, tri_h_input;
				char brush_input;
				cin >> x_input >> y_input >> tri_h_input >> brush_input;
				shapes.push_back(new DownTriangle(x_input, y_input, brush_input, tri_h_input, "tri_down"));
			}

			else if (type == "diamond") {
				int x_input, y_input, dia_d_input;
				char brush_input;
				cin >> x_input >> y_input >> dia_d_input >> brush_input;
				shapes.push_back(new Diamond(x_input, y_input, brush_input, dia_d_input, "diamond"));
			}

			else continue;
		}
		
		else if (tok == "draw") {
			canvas.Clear();
			for (int i = 0; i < shapes.size(); ++i) {
				shapes[i]->Draw(&canvas);
			}
			canvas.Print();
		}

		else if (tok == "delete") {
			int n;
			cin >> n;
			if (n < shapes.size()) {
				shapes.erase(shapes.begin() + n);
			}
			else {
				continue;
			}
		}

		else if (tok == "dump") {
			for (int i = 0; i < shapes.size(); i++) {
				cout << i << " ";
				shapes[i]->getData();
			}
		}

		else if (tok == "resize") {
			int row, col;
			cin >> row >> col;
			canvas.Resize(row, col);
		}

		else {
			break;
		}
	}

	for (int i = 0; i < shapes.size(); ++i) {
		delete shapes[i];
	}
	shapes.clear();
	return 0;
}
