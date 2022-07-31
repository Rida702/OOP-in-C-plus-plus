#include <iostream>
using namespace std;

class Classcounter {
	static int count;
	int num;

public:
	Classcounter () {
		++count;
	}

	void show() {
		cout << "Object No " << count << " created."<< endl;
	}
};
int Classcounter::count = 0;

int main() {

	Classcounter c1;
	c1.show();
	Classcounter c2;
	c2.show();
	Classcounter c3;
	c3.show();
	
return 0;
}
