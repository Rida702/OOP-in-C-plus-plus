#include <iostream>
using namespace std;

class Parent {
	int x, y;
public:
	Parent ( )  { x = y = 5; }
	virtual void show ( ){
		cout << "\nShow funtion of Parent class.\n";
		cout << x << "," << y << endl;
	}
	
	void display ( ) {
		cout << "\nDisplay function of Parent class.\n";
	}
};

class Child: public Parent {
	int w , z;
	public:
	Child ( )  { w = z = 7; }
	void show ( ){
		cout << "\nShow funtion of Child class.\n";
		cout << w << "," << z << endl;
	}
	
	void display ( ) {
		cout << "\nDisplay function of Child class.\n";
	}
};

int main ( ){
	Child c1;
//	Parent p1;
//	Child c1 = p1;  syntax error
//	Parent p1 = c1 ; logical error
	Parent &p1 = c1 ;
//	Parent *p1 = new Child;
//	Parent p1 = new Child;
	p1.display();
	p1.show();
	c1.display();
	c1.show();
	
	return 0;
}
