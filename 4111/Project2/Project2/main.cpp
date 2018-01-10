#include <cstdlib>
#include "List.h"
#include <iostream>
using namespace std;

int main() {

	List tree;

	tree.push(3.0);
	
	tree.push(5.0);

	tree.PrintElements();

	return 0;

	/*

	List s;
	int choice;
	while (1)
	{
		
		cout << "1:PUSH\n
				2:POP\n
				3:DISPLAY STACK\n
				4:EXIT\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			s.push();
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.show();
			break;
		case 4:
			return 0;
			break;
		default:
			cout << "\nPlease enter correct choice!!";
			break;
		}
	}
	return 0;
	*/
}