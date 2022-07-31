#include<iostream>
using namespace std;
//{ };:
class Point { 
	int y, x;
public:
	
	
	Point ( ){ x = y = 0; }
	Point ( int x, int y){
	this->x = x;
	this->y = y;
	}
	void setX ( int x){
	this->x = x;
	}
	void setY ( int y){
	this->y = y;
	}
	
	/*Point ( const Point &p ) {
	this->x = p.x;
	this->y = p.y;
	cout << "Copy constructor called. \n";
	}
	
	/*Point& operator = ( const Point& t ){ 
	cout << "Assignment operator called. \n";
	x = t.x;
	y = t.y;
	return *this;
	}*/
	
	/*void operator = (const Point &D ) { 
        x = D.x;
        y = D.y;
        cout << "Assignment no 2 operator called. \n";
      }*/

	void show () { 
	cout << "X: " << x << ',' << " Y: " << y << endl;
	}
	
};

int main ( ){ 
	Point p1(3,4), p2(8,7);
	p1.show();
	p2.show();
	cout << "\n\nAssignment is supposed to be called here.\n\n";
	p1 = p2;   //Assignment operator
	p1.show();
	p2.show();
//	p3.show();
	cout << "\n\nCopy Constructor is supposed to be called here.\n\n";
	Point p3 = p2; // copy constructor
	cout << "\n\nAssignment is supposed to be called here.\n\n";
	p2 = p1;
	p1.show();
	p2.show();
	p3.show();
	
	cout << "\n\nNow we are changing values to check deep or shallow copy.\n\n";
	p1.setX(6);
	p1.setY(8);
	p1.show();
	p2.show();
	p3.show();
	cout << "\n\ndeep copy created.\n\n";
	return 0;
}
