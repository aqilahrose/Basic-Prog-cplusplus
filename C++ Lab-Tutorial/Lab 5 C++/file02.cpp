//question 2

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream fin;
	fin.open("display.txt");
	char ch;
	int count=0;
	while(!fin.eof())
	{
		fin.get(ch);
		if(isalpha(ch))
			count++;
	}
	cout<<"Number of alphabets in file are "<<count;
	fin.close();
}

