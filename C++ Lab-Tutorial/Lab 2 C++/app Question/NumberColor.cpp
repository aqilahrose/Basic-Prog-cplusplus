#include <iostream>

using namespace std;

int main ()
{
	char ans = 'N';
  	do {
    
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

	cout<<endl; 
    cout << "Do you want to continue (Y/N)?\n";
    cout << "You must type a 'Y' or an 'N' :";
    cin >> ans;
  } while ((ans == 'Y') || (ans == 'y'));
  	cout<<endl;
}
