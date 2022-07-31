#include<iostream>
using namespace std;

class Employee{
	const int count;
public:
	/*Employee ( int c ){
		count = c ;
	}*/ 		//problem here
	
	Employee ( int c ) : count(c) {
		cout << "non-parameterized Constructor" << endl;
	}
	
	void show (){
		cout << "Count: " << count << endl;
	}
};

int main (){
	Employee e1(5);
	e1.show();
	return 0;
}

