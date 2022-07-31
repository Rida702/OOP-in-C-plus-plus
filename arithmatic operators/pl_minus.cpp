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
	
	Point add( const Point& p){
		Point newp;
		newp.x = this->x + p.x;
		newp.y = this->y + p.y;
		return newp;
	}
	
	Point subtract( const Point& p){
		Point newp;
		newp.x = this->x - p.x;
		newp.y = this->y - p.y;
		return newp;
	}
	
	Point multiply( const Point& p){
		Point newp;
		newp.x = this->x * p.x;
		newp.y = this->y * p.y;
		return newp;
	}
	
	Point divide( const Point& p){
		Point newp;
		newp.x = this->x / p.x;
		newp.y = this->y / p.y;
		return newp;
	}
	
	
	void display (){
		cout << "(" << x << "," << y << ")" << endl;
	}
	
	friend ostream& operator << ( ostream &out, const Point &p){
		out << "(" << p.x << "," << p.y << ")" << endl;
	}
	
};

int main (){
	Point p1(3,4),p2(2,1);
	p1.display();
	p2.display();
	cout << "Addition is: " << p1.add(p2) << endl;
	cout << "Subtraction is: " << p1.subtract(p2) << endl;
	cout << "Multiplication is: " << p1.multiply(p2) << endl;
	cout << "Division is: " << p1.divide(p2) << endl;
}
