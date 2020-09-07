#include "rectangle.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
    while (1) {
        string cmd;
        int w_input,h_input;
        cin >> cmd;
        if (cmd=="nonsquare"){
            cin >> w_input >> h_input;
            NonSquare N(w_input,h_input);
            N.print();
        }
        else if (cmd=="square"){
            cin >> w_input;
            Square S(w_input);
            S.print();
        }
        else if (cmd=="quit"){
            break;
        }
    }
    return 0;
}
