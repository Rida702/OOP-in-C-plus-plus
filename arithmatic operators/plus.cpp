#include <iostream>
using namespace std;

class Point {
	float x;
	float y;
public:
	Point () {
		x = y = 0;
	}
	Point ( float x1, float y1) {
		x = x1;
		y = y1;
	}
	void display (){
		cout << "(" << x << "," << y << ")" << endl;
	}
	
	friend ostream& operator << ( ostream &out, const Point &p){
		out << "(" << p.x << "," << p.y << ")" << endl;
	}
	
	Point operator + ( const Point &p ){
		Point newP;
		newP.x = this->x + p.x;
		newP.y = this->y + p.y;
		return newP;
	}
	
	Point operator - ( const Point &p ){
		Point newP;
		newP.x = this->x - p.x;
		newP.y = this->y - p.y;
		return newP;
	}
	
	Point operator * ( const Point &p ){
		Point newP;
		newP.x = this->x * p.x;
		newP.y = this->y * p.y;
		return newP;
	}
	
	Point operator / ( const Point &p ){
		Point newP;
		newP.x = this->x / p.x;
		newP.y = this->y / p.y;
		return newP;
	}
};

int main (){
	Point p1(3,4),p2(2,3);
	p1.display();
	p2.display();
	Point p3 = p1+p2;
	cout << p3 << endl;
	Point p4 = p1-p2;
	cout << p4 << endl;
	Point p5 = p1*p2;
	cout << p5 << endl;
	Point p6 = p1/p2;
	cout << p6 << endl;	
}
