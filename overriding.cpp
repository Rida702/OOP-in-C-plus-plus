#include <iostream>
using namespace std;

class Parent {
public:
	
	virtual void show ( ){
		cout << "\nShow funtion of Parent class.\n";
	}
	
	virtual void display ( ) {
		cout << "\nDisplay function of Parent class.\n";
	}
};

class Child: public Parent {
	public:
	void show ( ){
		cout << "\nShow funtion of Child class.\n";
	}
	
	void display ( ) {
		cout << "\nDisplay function of Child class.\n";
	}
};

int main ( ){
	Child c1;    
	//you refer to a child class object using a pointer 
	Parent *p1 = new Child;
	//or a reference to the parent class
	//Parent &p = c1;
	//	Virtual functions ensure that the correct function is called for an object,
	//	regardless of the type of reference (or pointer) used for function call.
	p1->display();
	p1->show();
	c1.display();
	c1.show();
	return 0;
}
