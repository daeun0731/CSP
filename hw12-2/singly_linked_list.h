#pragma once
#include<iostream>
using namespace std;
template <class T>
class Node {
public:
	T data;
	Node<T>* next;
	Node(T d) { data = d; next = NULL; }
};

template <class T>
class List {
private:
	Node<T>* head;
public:
	List() { //create an empty list, head=NULL;
		head = NULL;
	}

	List(T* arr, int n_nodes) { //create a list with n_nodes and initialize using arr
		head = NULL;
		Node<T>* cur = head;
		for (int i = 0; i < n_nodes; i++) {
			Node<T>* tmp = new Node<T>(arr[i]);
			tmp->next = NULL;
			if (cur == NULL) {
				head = tmp;
			}
			else {
				cur->next = tmp;
			}
			cur = tmp;
		}
	}

	bool isEmpty() const {
		if (head == NULL) {
			return 1;
		}
		else {
			return 0;
		}
	}

	void insert_at(int idx, T data) { //assume 0<=idx<n_size
		Node<T>* newNode = new Node<T>(data);
		if (head == NULL) {
			head = newNode;
		}
		else {
			if (idx == 0) {
			newNode->next = head;
			head = newNode;
			}
			else {
			Node<T>* tmp = head;
			for (int i = 0; i < idx-1; i++) {
				tmp = tmp->next;
			}
			newNode->next = tmp->next;
			tmp->next = newNode;
			}
		}
	}

	void remove_at(int idx) { //assume 0<=idx<n_size
		Node<T>* tmp = NULL;
		Node<T>* rm = head;
		for (int i = 0; i < idx; i++) {
			tmp = rm;
			rm = rm->next;
			if (rm == NULL) {
				break;
			}
		}
		if (rm!=NULL){
			if (tmp != NULL) {
				tmp->next = rm->next;
			}
			else {
				head = rm->next;
			}
			delete rm;
		}
	}

	void pop_back() { //if list is empty, do nothing
		if (head != NULL) {
			Node<T>* tmp = head;
			int n_nodes=0;
			while (tmp->next != NULL) {
				tmp = tmp->next;
				n_nodes++;
			}
			remove_at(n_nodes);
		}
		else {
			return;
		}
	}

	void push_back(T val) {
		Node<T>* newNode = new Node<T>(val);
		if (head == NULL) {
			head = newNode;
		}
		else {
			Node<T>* tmp = head;
			int n_nodes=0;
			while (tmp->next!=NULL) {
				tmp = tmp->next;
				n_nodes++;
			}
			n_nodes++;
			insert_at(n_nodes, val);
		}
	}

	void pop_front() { //if list is empty, do nothing
		if (head != NULL) {
			remove_at(0);
		}
		else {
			return;
		}
	}

	void push_front(T val) {
		insert_at(0,val);
	}

	friend ostream& operator << (ostream& out, const List& rhs) {
		Node<T>* tmp = rhs.head;
		while (tmp != NULL) {
			if (tmp->next==NULL) {
				out << tmp->data << endl;
				break;
			}
			else {
				out << tmp->data << ",";
				tmp = tmp->next;
			}
		}
		return out;
	}
};

