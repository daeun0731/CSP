#include<iostream>
#include "sort.h"
using namespace std;

int main(void){
    int n;
    cin >> n;
    if (n>0){
        int* arr=new int[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        sorting(arr,n);
        for (int i=0;i<n;i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
        delete[] arr;
    }

    return 0;
}
