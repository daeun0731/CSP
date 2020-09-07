#include "number.h"

void Number::setNumber(int num){
    _num=num;
}

int Number::getNumber(){
    return _num;
}

int Square::getSquare(){
    int square_num=_num*_num;
    return square_num;
}

int Cube::getCube(){
    int cube_num=_num*_num*_num;
    return cube_num;
}
