#include <iostream>
using namespace std;
//both have non-parameterized cont
class A{
	int a;
	public:
	A (){ cout << "A non-parameterized." << endl;	}
};

class B : public A{
	int b;
	public:
	B (){ cout << "B non-parameterized." << endl;	}
};

int main (){
	A a1;
	cout << "--------\n";
	B b1;
}
