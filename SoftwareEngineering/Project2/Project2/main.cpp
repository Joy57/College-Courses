#include <cstdlib>
#include "List.h"
#include <iostream>
using namespace std;

int main() {

	//List tree;

	//tree.push(3.0);
	//
	//tree.push(5.0);

	//tree.PrintElements();

	//return 0;


	List s;
	int choice;
	double v = 0;
	while (1)
	{
		cout << " 1:PUSH\n 2:POP\n 3:Number of items in stack\n 4:DISPLAY STACK\n 5:EXIT\n";
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter num: ";
			cin >> v;
			s.push(v);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.numOfElements();
			break;
		case 4:
			s.PrintElements();
			break;
		case 5:
			return 0;
			break;
		default:
			cout << "\nPlease enter correct choice!!";
			break;
		}
	}
	return 0;
	
}