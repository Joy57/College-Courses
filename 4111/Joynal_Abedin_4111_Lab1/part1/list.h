#pragma once

class List {
private:

	//node struct, bunch of nodes
	//struct node {
	//	int data;
	//	node* next; //create a node pointer inside of each node. points to next node in the list
	//};

	typedef struct node {
		int data;
		node* next; //create a node pointer inside of each node. points to next node in the list
	} *nodePtr;

	//typedef struct node* nodePtr;

	//instead of writing the code below
	//node* head; //head node pointer
	//I can write this 

	nodePtr top; //head node pointer
	//nodePtr curr;
	nodePtr temp;
	int total;

public: //this is where the func go, and the func will access private data
	List(); //defualt constructor
	~List();
	void push(double value);
	double pop();
	int isEmpty();
	void numOfElements();
	void PrintElements();
	/*
	void push (double value); // pushes an element with the value into the stack. 5 pts. · 
	double pop (); // pops an element from the stack and returns its value. 5 pts. · 
	int isEmpty(); // returns 1 if the stack is empty, 0 otherwise. 5 pts. · 
	int numOfElements(); // returns the number of elements in the stack. 5 pts. · 
	void printElements(); // print out the current stack to the console. 5 pts.
	
	*/


};