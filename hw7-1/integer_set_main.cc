#include "integer_set.h"
#include <string>

int main(void){
    IntegerSet ISet;
    string s;
    int n;

    while (1) {
        cin >> s;
        if (s=="quit"){
            break;
        }
        else {
            cin >> n;
            if (s=="add"){
                ISet.AddNumber(n);
            }
            else if (s=="del"){
                ISet.DeleteNumber(n);
            }
            else if (s=="get"){
                cout << ISet.GetItem(n) << endl;
            }
        }
    }
    return 0;
}
            
