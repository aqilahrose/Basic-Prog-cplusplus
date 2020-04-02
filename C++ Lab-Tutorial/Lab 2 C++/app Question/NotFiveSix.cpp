#include <iostream>

using namespace std;

int main ()
{

	int isfive;
	cout<<"please enter your number"<<endl;
	cin>> isfive;
		
	if(isfive == 5){ 
	
		cout<<"your number is 5";
	 }
	 
	else if(isfive == 6){ 
		cout<<"your number is 6"; 
		}
		
	else{ 
	cout<<"your number is not 5 or 6"; 
	}
	
 /*		if(isfive == 5 || isfive == 6)
	{ 
		cout<<"your number is 5 or 6";
	 }
		else
	{ 
	cout<<"your number is not 5 or 6"; 
	}
*/
	
/*	if(isfive != 5 && isfive != 6)
	{ 
	cout<<"your number is not 5 or 6"<<endl; 
	cout<<"your number is:"<<isfive;
	}
*/
	
}
