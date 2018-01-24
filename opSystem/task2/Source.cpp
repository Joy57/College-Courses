#include <iostream>
#include <string>

using namespace std;

string prompt;
int histCount = 0;
string hist[11];

void help(){
	cout<<"prompt "<<endl; 
	cout<<"url - class website"<<endl;
	cout<<"hour - class time"<<endl;
	cout<<"room - room number"<<endl;
	cout<<"desp - description of course"<<endl;
	cout<<"text - text book"<<endl; 
	cout<<"ref - reference of books"<<endl;
	cout<<"prof - professor name"<<endl;
	cout<<"pol - office location"<<endl;
	cout<<"pma - professor email"<<endl;
	cout<<"ta - teacher assistant name "<<endl; 
	cout<<"tol - TA office"<<endl;
	cout<<"toh - TA office hour"<<endl;
	cout<<"tma - TA email"<<endl;
	cout<<"history - list of history events you set"<<endl;
	cout<<"text - text book"<<endl; 
	cout<<"ref - reference of books"<<endl;
	cout<<"help - help menu"<<endl;
	cout<<"exit or quit - exit program"<<endl;
	cout<<endl; 
}
void history() {

	if (histCount <= 10){
		hist[histCount] = prompt;
		histCount++;
	}
	else
	{
		for (int i = 1; i < 11; ++i) {
			hist[(i - 1)] = hist[i];
		}
		hist[10] = prompt;
	}
}
int main() {

//	string prompt;
	int powerPrompt = 0;
	//string hist[10];
	int histCount = 0;
	string show = getenv("USER");
	cout << "< ";
	cout << show;
	cout << " > ";
	cin >> prompt;
	//string prmpt;

	while (1) {
		
		if (prompt == "url") {
			powerPrompt++;
			cout << "< " << show << " > ";
			cout << "www.cs.wayne.edu/~lihao/Courses/CSC4420/\n";
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "quit" || prompt == "exit")
		{
			cout << "exited..." << endl;
			break;
		}
		else if (prompt == "hour"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"Class hour is from 10 am to 11:15 am Monday and Wednesday\n";
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "room"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"Room is 125 in state hall\n";
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "desp"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"Operating system is an essential software layer to use various various computing devices. This course covers the basic   components   and   design   principles   of   modern   operating   systems,   including   process   and   thread,   CPU scheduling, memory management, file system and others. This course also provides  hand-on programming experiences of using Linux system calls, and design and implementation of a cloud-based file system. " << endl; 
cout<<endl;
			history();
			cout<< "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "text"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"Modern Operating Systems, Andrew S. Tanenbaum, 4th Edition, Pearson, 2015"<<endl; 
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "ref"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<" Operating System Concepts, 8th Edition, Wiley, 2008.\n"
			<<" Understanding the Linux Kernel, , 3rd Edition, O'Reilly Media, 2005. \n"  
			<<" Advanced UNIX Programming , 2nd Edition, Pearson, 2004. \n"
			<<" Advanced Programming in the UNIX Environment, Addison-Wesley, 1992.\n";
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "prof"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"Lihao Xu\n";
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "pol"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"5057 Woodward, Floor 14, Suite 1401.1\n";
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "poh"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"MON, WED, 1pm to 2pm or by appointment\n";
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "pma"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"lihao@wayne.edu"<<endl;
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "ta"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"GTA/Lab instructor: Sumukhi Chandrashekar"<<endl;  
			
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "tol"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"Address:5057 Woodward, Floor 3, Room 3211 "<<endl;

			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "toh"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"Office Hours: Mon, Wed, 11:15AM – 12:15PM"<<endl;
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}	
		else if (prompt == "tma"){
			powerPrompt++;
			cout << "< " << show << " > ";
			cout<<"Email: sumukhic@wayne.edu "<<endl;
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "help"){
			powerPrompt++;
			cout << "< " << show << " > ";
			help();
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}

		else if (prompt == "prompt") {
			powerPrompt++;
			cout << "Type a new prompt without any spaces: ";
			cin >> show;
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else if (prompt == "history") {
			powerPrompt++;
			for (int p = 0; p < 11; p++) {
				cout << p << " - " << hist[p] << endl;
			}
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;
		}
		else {
			powerPrompt++;
			history();
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cout << "Invalid input" << endl;
			cout << "< " << show << " > " << " < " << powerPrompt << " > ";
			cin >> prompt;

		}

	}
	return 0;

}
