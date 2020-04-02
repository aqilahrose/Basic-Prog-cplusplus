//files in c++

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream fout;
	fout.open("lab5.txt");
	for(int i=1;i<=100;i++)
		fout<<i<<endl;
	fout.close();
	cout<<"file successfully created!";
	return 0;
}

