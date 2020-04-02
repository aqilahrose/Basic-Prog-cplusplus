#include <iostream>
using namespace std;

char myFuncn() {
// This is a local variable
char myVar = 'A';

}

int main()
{
   //to access value in another function in myFunc()
   
   cout<<"to access a value in myFunc()"<<myFuncn();
	cout <<"Value of myVar: "<< myVar<<endl;
   myVar='Z';
   cout <<"Value of myVar: "<< myVar;
   return 0;
}
