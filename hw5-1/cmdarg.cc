#include<iostream>
#include<stdlib.h>
#include<string>
using namespace  std;

int main(int argc, char** argv){
    string stringSum;
    int intSum=0;

    for (int i=1;i<argc;i++){
        if (atoi(argv[i])==0){
            stringSum+=argv[i];
        }

        else {
            intSum+=atoi(argv[i]);
        }
    }

    cout << stringSum << endl;
    cout << intSum << endl;

    return 0;
}
