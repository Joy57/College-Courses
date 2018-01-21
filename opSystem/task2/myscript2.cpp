#include<iostream>
#include <stdlib.h>
#include<string> 
using namespace std; 

int main (){
	
	string prompt;

	cout <<"< ";
	cout << getenv("USER");
	cout << " > ";
	cin >>prompt;
	
	while (true){
		
		if (prompt == "url"){
		cout <<"www.cs.wayne.edu/~lihao/Courses/CSC4420/"<<endl;
		cout <<"< ";
		cout << getenv("USER");
		cout << " > ";		
		cin >>prompt;
		}		
		else if (prompt =="quit" || prompt =="exit")
		{
		cout <<"exited..."<<endl;
		break;		
		}
		else{	
		cout <<"< ";
		cout << getenv("USER");
		cout << " > ";		
		cout <<"Invalid input"<<endl;
		cout <<"< ";
		cout << getenv("USER");
		cout << " > ";
		cin >>prompt;
				
		}
	
	}
	return 0;

} 
