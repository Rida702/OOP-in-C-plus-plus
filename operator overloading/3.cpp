#include <iostream>
using namespace std;
//A has non-parameterized const
//B has both parameterized and parameterized 
class A{
	int a;
	public:
	A (){ cout << "A non-parameterized." << endl;	}
};

class B : public A{
	int b;
	public:
	B (){ cout << "B non-parameterized." << endl;	}
	B (int B) { b = B;
		cout << "B parameterized." << endl;
	}
};

int main (){
	A a1;
	cout << "--------\n";
	B b1;
}
