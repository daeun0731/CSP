#include "classes.h"
#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<A*> objects(3);

    objects[0]=new A;
    objects[1]=new B;
    objects[2]=new C;

    for (int i=0;i<3;i++){
        objects[i]->test();
    }

    for (int i=0;i<3;i++){
        delete objects[i];
    }

    return 0;
}
