#include <iostream>

using namespace std;

int main ()
{
	char ans = 'N';
  	do {
  		
	int WorkingHours;
	double pay;
	double rate;
	cout<<"please insert your working hours:"<<endl;
	cin>> WorkingHours;
	cout<<"please insert your rate:"<<endl;
	cin>> rate;
	 
	 if (WorkingHours> 40){
	 	pay = 40 * rate * (WorkingHours-40);
	 	cout<<"your pay is:"<<pay<<endl;
	 }
	 else {
	 	pay = WorkingHours * rate;
	 	cout<<"your pay is:"<<pay<<endl;
	 }
	 	cout<<endl; 
    cout << "Do you want to continue (Y/N)?\n";
    cout << "You must type a 'Y' or an 'N' :";
    cin >> ans;
  } while ((ans == 'Y') || (ans == 'y'));
  	cout<<endl;
	 //system ("Pause");
}
