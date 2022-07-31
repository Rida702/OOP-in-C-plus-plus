#include<iostream>
using namespace std;

class A{
	int x;
	public:
		void setX( int x1 ){
			x = x1;
		}
		
		int getX(){
			return x;
		}
		
};

class B : protected A{
	int y;
	public:
		void setY( int y1 ){
			y = y1;
			//x = 5;  //error here as x is private
			setX(5);	//can access public member funtions easily
			cout << getX() << "\n";
			cout << y;
		}
		
};

int main (){
	B b;
	b.setY(3);
	return 0;
}
