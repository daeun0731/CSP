#include "MyVector.h"
#include "MyContainer.cpp"
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
MyVector<T>::MyVector()
	:MyContainer<T>()
{
	capacity = this->n_ele;
}

template <typename T>
MyVector<T>::MyVector(int n)
	:MyContainer<T>(n)
{
	capacity = this->n_ele;
}

template <typename T>
MyVector<T>::MyVector(T* arr, int n)
	:MyContainer<T>(arr, n)
{
	capacity = this->n_ele;
}

template <typename T>
bool MyVector<T>::empty()
{
	if (this->n_ele == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

template <typename T>
int MyVector<T>::size()
{
	return this->n_ele;
}

template <typename T>
int MyVector<T>::max_size()
{
	return capacity;
}

template <typename T>
void MyVector<T>::reserve(int new_cap)
{
	capacity=new_cap;
	T* tmp=new T[capacity];
	for (int i = 0; i < this->n_ele; i++) {
		tmp[i] = this->obj_arr[i];
	}
	this->obj_arr = tmp;
}

template <typename T>
void MyVector<T>::push_back(T obj)
{
	if (capacity > this->n_ele) {
		this->obj_arr[this->n_ele] = obj;
	}
	else {
		T* tmp = new T[max(1, 2 * capacity)];
		for (int i = 0; i < this->n_ele; i++) {
			tmp[i] = this->obj_arr[i];
		}
		this->obj_arr = tmp;

		this->obj_arr[this->n_ele] = obj;

		capacity = max(1, 2 * capacity);
		this->n_ele++;
	}
}

template <typename T>
void MyVector<T>::pop_back()
{
	this->obj_arr[(this->n_ele)-1] = NULL;
	this->n_ele--;
}

template <typename T>
T& MyVector<T>::front()
{
	return this->obj_arr[0];
}

template <typename T>
T& MyVector<T>::back()
{
	return this->obj_arr[(this->n_ele) - 1];
}

template <typename T>
T& MyVector<T>::at(int idx)
{
	if (idx<(this->n_ele)) {
		return this->obj_arr[idx];
	}
	else {
		throw out_of_range("error : out of range");
	}
}

template <typename T>
T& MyVector<T>::operator[](const int& i)
{
	return this->obj_arr[i];
}

template <typename T>
MyVector<T> MyVector<T>::operator+(const MyVector<T>& rhs)
{
	int new_capacity = this->capacity + rhs.capacity;
	int new_ele = this->n_ele + rhs.n_ele;
	T* tmp_arr = new T[new_capacity];
	tmp_arr = this->obj_arr;
	for (int i = 0; i < rhs.n_ele; i++) {
		tmp_arr[this->n_ele + i] = rhs.obj_arr[i];
	}
	MyVector<T> tmp(tmp_arr, new_ele);
	
	return tmp;
}
