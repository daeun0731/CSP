#include "simple_int_set.h"
#include<iostream>

set<int> SetIntersection(const set<int>& set0, const set<int>& set1) {
	set<int> answer;
	set<int>::iterator iter0;
	set<int>::iterator iter1;
	for (iter0 = set0.begin(); iter0 != set0.end(); iter0++) {
		for (iter1 = set1.begin(); iter1 != set1.end(); iter1++) {
			if (*iter0 == *iter1) {
				answer.insert(*iter0);
			}
		}
	}
	return answer;
}

set<int> SetDifference(const set<int>& set0, const set<int>& set1) {
	set<int> answer(set0);
	set<int>::iterator iter0;
	set<int>::iterator iter1;
	for (iter0 = set0.begin(); iter0 != set0.end(); iter0++) {
		for (iter1 = set1.begin(); iter1 != set1.end(); iter1++) {
			if (*iter0 == *iter1) {
				answer.erase(*iter0);
			}
		}
	}
	return answer;
}

set<int> SetUnion(const set<int>& set0, const set<int>& set1) {
	set<int> answer;
	set<int> setA = SetIntersection(set0, set1);
	set<int> setB = SetDifference(set0, set1);
	set<int> setC = SetDifference(set1, set0);
	answer.insert(setA.begin(), setA.end());
	answer.insert(setB.begin(), setB.end());
	answer.insert(setC.begin(), setC.end());
	return answer;

}

