#include <iostream> 
#include <iomanip> 
using namespace std;

//Example 5
int main () {
float loan, rate, interest;
loan = 15700; rate = 0.03737;
interest = loan * rate;
//cout << fixed << showpoint << setprecision(2);
cout << showpoint<< setprecision(2);
cout << "Interest is RM: ";
cout << interest << endl;
}
