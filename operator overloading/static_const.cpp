#include<iostream>
using namespace std;

class Employee{
	static const int count;
public:
	//const int Employee::count is a static data member, can only be initialized at its definition
	/*Employee ( int c ) : count(c) <-wrong {
		cout << "non-parameterized Constructor" << endl;
	}*/			//problem here
	
	Employee ( int c ){
		cout << "parameterized Constructor" << endl;
	}
	
	void show (){
		cout << "Count: " << count << endl;
	}
};
const int Employee::count=5;

int main (){
	Employee e1(5);
	e1.show();
	return 0;
}

