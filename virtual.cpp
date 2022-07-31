#include <iostream>
using namespace std;

class Parent{
	public:
		virtual void show ( ) = 0;
};

class Child : public Parent {
	public:
	void show ( ) { cout << "Show of Child\n";}
};

int main ( ) {
//	Parent objP; abstract class cant have an object syntax error
	Child objC;
	objC.show();
	return 0;
}
