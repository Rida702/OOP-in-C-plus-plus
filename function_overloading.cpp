#include<iostream>
using namespace std;

class Simple{
	public:
	void add ( int x, int y){
		cout << "Integar  sum is: " << x+y << endl;
	}
	
	void add ( float x, float y){
		cout << "Float  sum is: " << x+y << endl;
	}
};

int main (){
	Simple s1, s2;
	s1.add(4.2f,6.7f);
	s1.add(6,6);
	return 0;
}
