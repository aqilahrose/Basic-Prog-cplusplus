//  This program prints the grade for mathematics subject




#include <iostream>
using namespace std;

int main()
{
   float paper1, paper2, marks;    // holds the grade average

   cout << "Input your marks for first paper:" << endl;
   cin >> paper1;
   
    cout << "Input your marks for second paper:" << endl;
    cin >> paper2;
    
    marks = ((paper1 + paper2) / 2);

   if (marks > 100){
   	cout << "Invalid data" << endl;
   }
      

   else if (marks>= 80){
   	 cout << 'A' << endl;
   }
     

   else if (marks >= 60){
   	cout << 'B' << endl;
   }
      

   else if (marks >= 40){
   	cout << 'D' << endl;
   }
      
    else if (marks >= 0) {
    	cout << "You fail" << endl;
	}
      
   else
      cout << "Invalid data--negative number" << endl;

    return 0;
}
