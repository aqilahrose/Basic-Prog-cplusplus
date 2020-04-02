//question 3

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	ofstream fout;
	fout.open("out.txt");
	string text ="Learning Computer science and learn to code is fun!";
	fout<<text;
	cout<<"file successfully created!";
	fout.close();
	return 0;
}


