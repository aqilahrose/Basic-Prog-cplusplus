//Write a program that displays elective courses menu and prompts the user to make a selection. 
//A switch statement determines the schedule for the schedule that they have chosen. 
//Use a do-while loop repeats until the user selects item / from the menu.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int number;
   char courses;
   bool validCourses;

   cout << fixed << showpoint << setprecision(2);
   do
   {
      cout << endl << endl;
      cout << "***************************************************"<<endl << endl;
      cout << " Display Schedule Elective Courses" << endl << endl;
      cout << "A: Arts " << endl;
      cout << "B: Computer Sciences "<< endl;
      cout << "C: Mathematics" << endl;
      cout << "D: Accounting" << endl <<endl << endl;

      cout << "Enter the courses code A,B,C, or D to know the offered schedule" << endl;
      cout << "Enter E to exit the program" << endl << endl;
      cout << "***************************************************"<<endl << endl;
      cin >> courses;

      switch(courses)
      {
         case 'a':
         case 'A':
         case 'b':
         case 'B':
         case 'c':
         case 'C':
         case 'd':
         case 'D': validCourses = true;
                   break;
         default: validCourses= false;
      }

      

      switch(courses)
      {
         case 'a':
         case 'A': 
                   cout << "You chose Arts " << endl;
				   cout << "The schdule would be on Tuesday at 2.00pm to 4.00pm " << endl;
                   cout << "Venue: Hall 1 School of Arts " << endl;
                   break;
         case 'b':
         case 'B': 
                   cout << "The schdule would be on Wednesday at 2.00pm to 4.00pm  " << endl;
                   cout << "Venue: Hall DKG31 School of CS" << endl;
                   break;
         case 'c':
         case 'C': cout << "The schdule would be on Tuesday at 3.00pm to 5.00pm " << endl;
         		   cout << "Venue: Hall DKG31 School of Mathematics" << endl;
                   break;
         case 'd':
         case 'D': cout << "The schdule would be on Wednesday at 2.00pm to 4.00pm " << endl;
         		   cout << "Venue: Hall 23 School of Management" << endl;
                   break;
         case 'e':
         case 'E': cout << " Thank You for using this system" << endl;
                   break;
         default: cout << "You did not select any courses" << endl;
                  cout << " Try again please" << endl;
      }

   } while (courses != 'e' && courses != 'E');
   
   return 0;
   
}
