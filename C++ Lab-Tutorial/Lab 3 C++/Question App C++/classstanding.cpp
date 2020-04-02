#include <iostream>

using namespace std;

int main () {
	
	char classStanding;
	float gpa;
	
	 cout << endl << endl;
      cout << "Class Standing" << endl << endl;
      cout << "f: first year " << endl;
      cout << "s: Second year "<< endl;
      cout << "j: Junior" << endl;
      cout << "n: Senior" << endl <<endl << endl;

    cout << "Enter the class standing code f,s,j or n " << endl;
    cin >> classStanding;
   	cout<<" note that for first year just type 'no' for gpa" << endl;
   	cout << "What gpa did you earn?"<<endl;
    cin >> gpa;
    
 switch (classStanding)
	{
	case 'f':
		cout << "dues = 150.00";
			break;
	case 's':
		if (gpa >= 3.75){
			cout << "dues = 75.00";
		}
				
		else
			cout << "dues = 120.00";
			break;
	case 'j':
		if (gpa >= 3.75){
			cout << "dues = 50.00";
		}
		
		else
			cout << "dues = 100.00";
			break;
	case 'n':
		if (gpa >= 3.75) {
				cout << "dues = 25.00";
		}
		
		else
			cout << "dues = 75.00";
		break;
		default: cout << "Invalid class standing code."<< endl;
		}	
	
}


