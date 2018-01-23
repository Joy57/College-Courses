#include<iostream> 
#include<string> 
using namespace std; 
int main (){
	string prompt; 
	string display; 
	int globalPrompt = 0; 
	cout <<  "--prompt%:" << " < " << globalPrompt << " > "; 
	cin >> prompt; 
	
	while (true) {
		if (prompt == "url") {
			globalPrompt++;
			cout << "www.cs.wayne.edu/~lihao/Courses/CSC4420/" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "prompt"){
			globalPrompt++;
			cout << "Input a new prompt: ";
			cin >> display;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		 else if (prompt == "hour") {
			 globalPrompt++;
			cout << "Monday & Wednesday hour: add later" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "room"){
			globalPrompt++;
			cout << "State hall room#" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "desp"){
			globalPrompt++;
				cout << "Operating system is an essential software layer to use various computing devices. This course covers the basic components and design principles of modern operating systems, including process and thread, CPU scheduling, memory management, file system and others. This course also provides hand-on programming experiences of using Linux system calls, and design and implementation of a cloud-based file system." << endl;
				cout <<  display << " < " << globalPrompt << " > ";
				cin >> prompt;
		}
		else if(prompt == "text"){
			globalPrompt++;
			cout << "Modern Operating Systems, 4/E , 4th Edition." << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "ref"){
			globalPrompt++;
			cout << "Operating System Concepts, 8th Edition, Wiley, 2008" << endl;
			cout <<"Understanding the Linux Kernel, , 3rd Edition, O'Reilly Media, 2005"<< endl;
			cout <<"Advanced UNIX Programming , 2nd Edition, Addison-Wesley, 2004"<< endl;
			cout <<"Advanced Programming in the UNIX Environment 1st Edition , Addison-Wesley, 1992 or 3rd edition, 2013"<< endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "prof"){
			globalPrompt++;
			cout << "Lihao Xu" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "pol"){
			globalPrompt++;
			cout << "Woodward 5057, Room 1401.1" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "poh"){
			globalPrompt++;
			cout << "Office Hours: add time later" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "pma"){
			globalPrompt++;
			cout << "lihao@wayne.edu" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "ta"){
			globalPrompt++;
			cout << "TA Name" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "tol"){
			globalPrompt++;
			cout << "Office: Science and Engineering Library Room#" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "toh"){
			globalPrompt++;
			cout << "Office Hours: add later" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "tma"){
			globalPrompt++;
			cout << "ta@wayne.edu" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "history"){
			globalPrompt++;
			//doesn't work
		}
		else if(prompt == "help"){
			globalPrompt++;
			cout << "prompt : sets to any string you input, in addition to the current global history event number, i.e, %h as in csh"<< endl;
			cout << "url : list the course web site" << endl;
			cout << "hour : list class times" << endl;
			cout << "room : list classroom location" << endl;
			cout << "desp : list the description of this course" << endl;
			cout << "text : list the textbook" << endl;
			cout << "ref : list the reference books" << endl;
			cout << "prof : list the professor's name" << endl;
			cout << "pol : professor's office location" << endl;
			cout << "poh : professor's office hours" << endl;
			cout << "pma : professor's email address" << endl;
			cout << "ta : list the TA's name" << endl;
			cout << "tol : TA's office location" << endl;
			cout << "toh : TA's office hours" << endl;
			cout << "tma : TA's email address" << endl;
			cout << "history : list history of events up to the most recent 5" << endl;
			cout << "help : list all the available commands" << endl;
			cout << "exit or quit : exit CSC4420 shell" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
		else if(prompt == "quit"){ 
			break;
		}
		else if(prompt == "exit"){ 
			break;
		}
		else{ 
			globalPrompt++;
			cout << "Invalid prompt" << endl;
			cout <<  display << " < " << globalPrompt << " > ";
			cin >> prompt;
		}
			}
			return 0;
	}
