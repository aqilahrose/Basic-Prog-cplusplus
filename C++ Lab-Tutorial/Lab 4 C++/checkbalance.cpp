#include <iostream>

using namespace std;

int main () {
	
	string response;
	float bankBal = 100.50,intRate = 1.5;
	
	
	cout << "Do you want to see your current balance? Y or N: ";
	cin >> response;
	
	while(response == "Y" || "y")
		{
			cout << "Bank balance is " << bankBal << endl;
			bankBal = bankBal + bankBal * intRate;
			cout << "Do you want to see next year's balance? Y or N: ";
			cin >> response; 
			
		}
		
		cout << "Have a nice day!" << endl;
	
}


