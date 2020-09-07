#include "sorted_array.h"
#include<string>
#include<stdlib.h>

int main(void){
    SortedArray SArray;
    string s;

    while (1) {
        cin >> s;
        if (s=="ascend"){
            vector<int> v=SArray.GetSortedAscending();
            for (int i=0;i<v.size();i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if (s=="descend"){
            vector<int> v=SArray.GetSortedDescending();
            for (int i=0;i<v.size();i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if (s=="max"){
            cout << SArray.GetMax() << endl;
        }
        else if (s=="min"){
            cout << SArray.GetMin() << endl;
        }
        else if (s=="quit"){
            break;
        }
        else {
            SArray.AddNumber(atoi(s.c_str()));
        }
    }
    return 0;
}
