#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

typedef struct {
    string name;
    int age;
} Person;

int main(void){
    int n;
    cin >> n;
    Person *p = new Person[n];
    for (int i=0;i<n;i++){
        cin >> p[i].name >> p[i].age;
    }
    for (int i=0;i<n;i++){
        cout << "Name:" << p[i].name << ", Age:" << p[i].age << endl;
    }

    delete[] p;

    return 0;
}

