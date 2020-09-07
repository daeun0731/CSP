#include "sorted_array.h"
#include<algorithm>
#include<functional>

SortedArray::SortedArray(){}

SortedArray::~SortedArray(){}

void SortedArray::AddNumber(int num){
    numbers_.push_back(num);
    sort(numbers_.begin(),numbers_.end());
}

vector<int> SortedArray::GetSortedAscending() const {
    vector<int> vec;
    vec.assign(numbers_.begin(),numbers_.end());
    sort(vec.begin(),vec.end());
    return vec;
}

vector<int> SortedArray::GetSortedDescending() const {
    vector<int> vec;
    vec.assign(numbers_.begin(),numbers_.end());
    sort(vec.begin(),vec.end(),greater<int>());
    return vec;
}

int SortedArray::GetMax() const {
    int max=numbers_[0];
    for (int i=0;i<numbers_.size();i++){
        if (numbers_[i]>=max){
            max=numbers_[i];
        }
    }
    return max;
}

int SortedArray::GetMin() const {
    int min=numbers_[0];
    for (int i=0;i<numbers_.size();i++){
        if (numbers_[i]<=min){
            min=numbers_[i];
        }
    }
    return min;
}
