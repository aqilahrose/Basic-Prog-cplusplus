//  This program prints pass or fail

#include <iostream>
using namespace std;

int main()
{
   float average;
   cout<< "enter the average mark"<<endl;
   cin >> average;    // holds the grade average

   if (average >= 60){
   	  cout << "You Pass" << endl;
   }
     
   else
      cout << "You fail" << endl;

    return 0;
}
