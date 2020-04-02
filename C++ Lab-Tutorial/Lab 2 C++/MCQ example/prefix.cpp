// the example of prefix and postfix

#include <iostream>

using namespace std;

int main(){
	
	cout<<"============= prefix============"<<endl;
	int x = 5;
	int y = ++x; //meaning that x has been incremented before anything
	
	
	cout<<"y:"<<y <<endl;
	cout<<"x:"<<x <<endl;
	
	
	cout<<"============= postfix============"<<endl;
	
	int w = 5;
	int k = w++;  //display w before anything
	

	cout<<"k:"<<k<<endl;
	cout<<"w:"<<w<<endl;

}
