#include<iostream>
#include <stdlib.h>
#include<string> 
using namespace std; 

int main (){
	
	string prompt;
	int powerPrompt=0;
	string Hist [10];
	int HisCount = 0;
	string show = getenv ("USER");
	cout <<"< ";
	cout << show;
	cout << " > ";
	cin >>prompt;
	//string prmpt;

	while (true){
		
		if (prompt == "url"){
		powerPrompt++;		
		cout << "< " << show << " > ";
		cout <<"www.cs.wayne.edu/~lihao/Courses/CSC4420/"<<endl;
		cout << "< " <<show << " > "<< " < " << powerPrompt << " > ";		
		cin >>prompt;
		}		
		else if (prompt =="quit" || prompt =="exit")
		{
		cout <<"exited..."<<endl;
		break;		
		}
		else if (prompt == "prompt"){
		powerPrompt++;
		cout <<"Type a new prompt without any spaces: ";
		cin >> show;	
		cout << "< " <<show << " > "<< " < " << powerPrompt << " > ";
		cin >> prompt;
		}
		else if (prompt == "history"){
		powerPrompt++;
		if (history <11){
		pastHist[pastHistCount] = prompt;
				//implement later
		//
			}	
		}
		else{	
		powerPrompt++;	
		cout << "< " <<show << " > "<< " < " << powerPrompt << " > ";	
		cout <<"Invalid input"<<endl;
		cout << "< " <<show << " > "<< " < " << powerPrompt << " > ";
		cin >>prompt;
				
		}
	
	}
	return 0;

} 
