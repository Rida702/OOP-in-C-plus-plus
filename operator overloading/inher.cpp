#include <iostream>
using namespace std;

class A{
	int a;
	public:
	A (){ cout << "A non-parameterized." << endl;	}
	A (int A) { a = A;
		cout << "A	parameterized." << endl;
	}
};

class B : public A{
	int b;
	public:
	B (){ cout << "B non-parameterized." << endl;	}
	B (int B) { b = B;
		cout << "B non-parameterized." << endl;
	}
};

int main (){
	A a1;
	cout << "--------\n";
	B b1;
}
