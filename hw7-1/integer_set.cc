#include "integer_set.h"
#include<algorithm>

IntegerSet::IntegerSet(){}
IntegerSet::~IntegerSet(){}

void IntegerSet::AddNumber(int num){
    numbers_.push_back(num);
    sort(numbers_.begin(),numbers_.end());
    vector<int>::iterator iter;
    for (iter=numbers_.begin();iter!=numbers_.end()-1;iter++){
        if (*iter==*(iter+1)){
            iter=numbers_.erase(iter);
            break;
        }
    }
    for (int i=0;i<numbers_.size();i++){
        cout << numbers_[i] << " ";
    }
    cout << endl;
}

void IntegerSet::DeleteNumber(int num){
    vector<int>::iterator iter;
    for (iter=numbers_.begin();iter!=numbers_.end()-1;iter++){
        if (*iter==num){
            iter=numbers_.erase(iter);
            break;
        }
    }
    for (int i=0;i<numbers_.size();i++){
        cout << numbers_[i] << " ";
    }
    cout << endl;
}

int IntegerSet::GetItem(int pos) const{
    if (pos>numbers_.size()){
        return -1;
    }
    else {
        return numbers_[pos];
    }
}
