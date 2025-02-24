#include <iostream>
#include <string>
using namespace std;
class Student{// a class is a user defined data type which works as a blue print for an object
	private:
	string studentID, name;
	double marks[5], averageMarks, sum=0;
	
	public:
	void CalculateAverage(string StudentName, string ID){
		name = StudentName;
		studentID = ID;
		for(int i = 0;i<5;i++){
			cout<<"\nEnter Marks for "<<i+1<<": ";
			cin>> marks[i];
			sum += marks[i];
		}
		averageMarks = sum/5;
	}
	void displayinfo(){
		cout<<"\nStudent ID: "<<studentID;
		cout<<"\nName: "<<name;
		cout<<"\nAverage marks: "<<averageMarks;
	}
		
};
int main(){// demonstrating how the object can used of this class
    Student s1;
    s1.CalculateAverage("Shourya", "RA456");
	s1.displayinfo();
	return 0;
}