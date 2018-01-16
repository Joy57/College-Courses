#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

List::List() {
	top = NULL;
}
List::~List() {
	temp = top;
	while (temp != NULL) {
		temp = temp->next;
		delete top;
		top = temp;
	}
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
	cout << "top --> " << top->data<< endl;
	cout << endl;
}

double List::pop() {

	if (!isEmpty()){
		temp = top;
		top = top->next;
		cout << "Popped element: " << temp->data << endl;
		delete temp;
		total--;
	}
	else cout << "Stack is empty\n";

	return 0;
}
int List::isEmpty() {
	if (top == NULL) {
		return true;
	}
	else 
		return false;
}
void List::numOfElements() {
	cout << "num of nodes in list: " << total << endl;
}
void List::PrintElements() {
	if (top != NULL) {
		temp = top;
		cout << "Printing elements...\n";
		//cout <<"top: "<<top->data << endl;
		while (temp->next != NULL) {
			//cout << "top: " << top->data << endl;

			cout <<"--> "<<temp->data << endl;
			temp = temp->next;
		}
		cout << "--> " << temp->data << endl;
	}
	else cout << "Nothing in stack\n";
}
