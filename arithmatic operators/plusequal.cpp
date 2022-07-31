#include <iostream>
using namespace std;
//Box operator+(const Box&);
//Box operator+(const Box&, const Box&);
class Point {
	int x;
	int y;
public:
	Point () {
		x = y = 0;
	}
	Point ( int x1, int y1) {
		x = x1;
		y = y1;
	}
	void display (){
		cout << "(" << x << "," << y << ")" << endl;
	}
	
	friend ostream& operator << ( ostream &out, const Point &p){
		out << "(" << p.x << "," << p.y << ")" << endl;
	}
	
	Point& operator += ( const Point &p ){
		this->x += p.x;
		this->y += p.y;
		return *this;
	}
};

int main (){
	Point p1(3,4),p2(2,3);
	p1.display();
	p2.display();
	Point p3;
	p3 = p1 += p2;
	cout << p3;
	return 0;
}
