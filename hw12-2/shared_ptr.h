#pragma once
#include<iostream>
using namespace std;

template <class T>
class My_shared_ptr
{
private:
	T* m_obj;
	int* count;
public:
	My_shared_ptr()
	{
		m_obj = NULL;
		count = NULL;
	}

	My_shared_ptr(T* obj)
	{
		m_obj = obj;
		count = new int(1);
	}

	My_shared_ptr(const My_shared_ptr& rhs)//copy constructor.
	{
		m_obj = rhs.m_obj;
		count = rhs.count;

		increase();
	}

	~My_shared_ptr()
	{
		if (getCount()!=0) {
			decrease();
			if (getCount() == 0) {
				delete m_obj;
				delete count;
				cout << "everything destroyed" << endl;
			}
		}
	}

	My_shared_ptr<T>& operator=(const My_shared_ptr<T>& rhs)
	{
		if (count == NULL) {
			this->m_obj = rhs.m_obj;
			this->count = rhs.count;
			increase();
		}

		else if ((*count) >= 1) {
			decrease();
			if (getCount() == 0) {
				delete m_obj;
				delete count;
			}
			this->m_obj = rhs.m_obj;
			this->count = rhs.count;
			increase();
		}

		return *this;
	}

	int getCount() {
		if (count == NULL) {
			return 0;
		}
		else {
			return *count;
		}
	}

	void increase() {
		(*count)++;
	}
	void decrease() {
		(*count)--;
	}

	const T* get_m_obj()
	{
		return m_obj;
	}
};
