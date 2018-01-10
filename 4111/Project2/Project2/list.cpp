#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

List::List() {
	top = NULL;
	temp = NULL;
}
void List::push(double value) {
	
	nodePtr n = new node;
	n->data = value;
	if (total <= 30) {
		
		if (top == NULL) {
			n->next = NULL;
		}
		else {
			n->next = top;
		}
		top = n;
		total++;
	}
	else {
		cout << "List is full \n";
	}
	cout << endl;
	cout << "Pushed an item\n";
	cout << "num of nodes in list: " << total << endl;
	cout << "top --> " << top->data<< endl;
	cout << endl;
}

double List::pop() {
	//double value;
	if (top == NULL) {
		cout << "Stack is empty\n";
	}
	else {
		temp = top;
		top = top->next;
		cout << "data: " << temp->data << endl;
		delete temp;
	}
	return 0;
}
int List::isEmpty() {
	if (top == NULL) {
		cout << "Stack is Empty\n";
	}
	else 
		return 0;
}
void List::numOfElements() {

}
void List::PrintElements() {
	if (top != NULL) {
		temp = top;
		while (temp->next != NULL) {
			cout << "data: " << temp->data << endl;
			temp = temp->next;
		}
	}
	else cout << "Nothing in stack\n";
}
