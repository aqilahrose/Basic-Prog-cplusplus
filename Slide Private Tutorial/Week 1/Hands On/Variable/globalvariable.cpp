#include <iostream>
using namespace std;
// This is a global variable
char myVar = 'A';

int main()
{
   cout <<"Value of myVar: "<< myVar;
   myVar='Z';
   cout <<"Value of myVar: "<< myVar;
   return 0;
}
