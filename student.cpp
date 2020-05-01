#include <iostream>
using namespace std;

class student
{
	private:
		char  name[30];
		int   rollNo;
		int   total;
		float perc;
	public:
		//member function to get student's details
		void getDetails(void);
		//member function to print student's details
		void putDetails(void);
};

//member function definition, outside of the class
void student::getDetails(void){
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
	cout << "Enter total marks out of 500: ";
	cin >> total;

	perc=(float)total/500*100;
}

//member function definition, outside of the class
void student::putDetails(void){
	cout << "Student details:\n";
	cout << "Name: "<< name << " ,Roll Number: " << rollNo << " ,Total: " << total << " ,Percentage: " << perc;
}

int main()
{
	student s1;		//object creation

	s1.getDetails();
	s1.putDetails();

	return 0;
}