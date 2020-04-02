#include <iostream>

using namespace std;

int main ()
{
	
    
    int colornum;
    		
	cout<<endl;
	cout<<"Please enter a number"<<endl;
	cin>> colornum;

	if(colornum > 0 && colornum <= 10)
	{ 
		cout<<"blue"<<endl;
 	}
	else if(colornum > 0 && colornum <= 20)
	{ 
		cout<<"red"<<endl; 
	}
	else if(colornum > 0 && colornum <= 30)
	{ 
		cout<<"green"<<endl;
 	}
	else
	{ 
		cout<<"not a correct color option" <<endl; 
	}


}
