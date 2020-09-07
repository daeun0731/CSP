#include "draw_shape.h"
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(void) {
	int canvas_width_input, canvas_height_input, x_input, y_input;
	string brush_input;
	cin >> canvas_width_input >> canvas_height_input;

	string cmd;

	while (1) {
		cin >> cmd;

		if (cmd == "quit") {
			break;
		}

		else if (cmd == "square") {
			int s_input;
			cin >> x_input >> y_input >> s_input >> brush_input;
			Square S(s_input, x_input, y_input, brush_input);
			S.Draw(canvas_width_input, canvas_height_input);
		}

		else if (cmd == "rect") {
			int h_input, w_input;
			cin >> x_input >> y_input >> h_input >> w_input >> brush_input;
			Rectangle R(h_input, w_input,x_input, y_input, brush_input);
			R.Draw(canvas_width_input, canvas_height_input);
		}

		else if (cmd == "diamond") {
			int d_input;
			cin >> x_input >> y_input >> d_input >> brush_input;
			Diamond D(d_input, x_input, y_input, brush_input);
			D.Draw(canvas_width_input, canvas_height_input);
		}
	}

	return 0;
}
