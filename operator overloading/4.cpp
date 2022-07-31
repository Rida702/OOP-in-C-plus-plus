#include <iostream>
using namespace std;
//A has parameterized
//B has non-parameterized
class A{
	int a;
	public:
	A (int a1) { a = a1;
		cout << "A parameterized." << endl;
	}
};

class B : public A{
	int b;
	public:
	//B () { cout << "B non-parameterized." << endl;	}
	B () : A(5) { cout << "B non-parameterized." << endl;	}
};

int main (){
	A a1(3);
	cout << "--------\n";
	B b1;
}
