#include <iostream>
using namespace std;
//A has non-parameterized const
//B has parameterized 
class A{
	int a;
	public:
	A (){ cout << "A non-parameterized." << endl;	}
};

class B : public A{
	int b;
	public:
	//B ( int b1 ) { b = b1 ;
	//	cout << "B parameterized." << endl;
	//}
	
	B ( int b1 ) : A() { b = b1 ;
		cout << "B parameterized." << endl;
	}
};

int main (){
	A a1;
	cout << "--------\n";
	B b1(5);
}
