#include<iostream>
using namespace std;

class Point{
	float x, y;
	public:
		Point () {	}
		Point ( float x1, float y1 ) {
			x = x1;
			y = y1;
		}
		
		/*Point ( const Point &p ){
			cout << "Deep copy-constructor called." << endl;
			this->x = p.x;
			this->y = p.y;
		}*/
		
		void setvalues ( int x1, int y1 ){
			x = x1;
			y = y1;
		}
		
		/*Point& ( const Point& p ){
			cout << "Deep copy-constructor called." << endl;
			this->x = p.x;
			this->y = p.y;
			return *this;
		}*/
		
		void show ( ) {
			cout << x << "," << y << endl;
		}
};

int main ( ){
	Point p1(3,4),p2;
	cout << "\nP1: ";
	p1.show();
	p2 = p1;
	cout << "\nP2: ";
	p2.show();
	cout << "Changing values: " << endl;
	p1.setvalues(2,2);
	cout << "\nP1: ";
	p1.show();
	cout << "\nP2: ";
	p2.show();
	Point p3 = p1;
	cout << "\nP3: ";
	p3.show();
	cout << "\nP2: ";
	p2.show();
	return 0;
}
