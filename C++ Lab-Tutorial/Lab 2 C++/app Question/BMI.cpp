#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

	char ans = 'N';
  	do {
  		
	float bmi, weight, height;
	cout <<"Your weight: ";
	cin >> weight;
	cout <<"Your height: ";
	cin >> height;
	//bmi=(weight*100)/(height*height);
	bmi=(weight)/(pow(height,2)/100);
	cout << fixed << showpoint << setprecision(2);
	cout << "Your BMI index is :" ;
	cout << bmi << endl;
	
	if (bmi< 0.18) {
		
		cout<<" Eat healthy! you are underweight!"<<endl;
	}
		else if (bmi >= 0.18 && bmi <= 0.25){
		cout<<" Nice! you have ideal weight"<<endl;
	}
	
	else {
		cout<<" Please be careful! you are overweight"<<endl;
	}
	cout<<endl; 
    cout << "Do you want to continue (Y/N)?\n";
    cout << "You must type a 'Y' or an 'N' :";
    cin >> ans;
  } while ((ans == 'Y') || (ans == 'y'));
  	cout<<endl;
}
