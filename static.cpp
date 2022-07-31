#include <iostream>
using namespace std;

class Employee {
	int ID;
//	int count;
	static int count; //Declaring here
public:
	int x;
	void setID ( void ){
	cout << "Enter your ID: \t";
	cin >> ID;	
	count++;	
	}
	int getID ( void ) {
		cout << "Entered ID is: " << ID << "\nEmplyee count is: " << count <<  endl; 
	}
	static void getCount ( ){
	cout << "Value of count is: " << count << endl;
}
};

int Employee:: count=0; //initialization

int main (){
	Employee e1, e2, e3;
	e1.setID();
	e1.getID();
	Employee::getCount();
	e2.setID();
	e2.getID();
	
	e3.setID();
	e3.getID();
	//Employee::getCount();
	e3.getCount();
	return 0;
}
