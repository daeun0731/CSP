#include "number.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
    string cmd;
    int number;
    while(1){
        cin >> cmd;
        if (cmd=="quit"){
            break;
        }
        else {
            cin >> number;
            if (cmd=="number"){
                Number N;
                N.setNumber(number);
               cout << "getNumber(): " << N.getNumber() << endl;
            }
            else if (cmd=="square"){
                Square S;
                S.setNumber(number);
                cout << "getNumber(): " << S.getNumber() << endl;
                cout << "getSquare(): " << S.getSquare() << endl;
            }
            else if (cmd=="cube"){
                Cube C;
                C.setNumber(number);
                cout << "getNumber(): " << C.getNumber() << endl;
                cout << "getSquare(): " << C.getSquare() << endl;
                cout << "getCube(): " << C.getCube() << endl;
            }
        }
    }
    return 0;
}
