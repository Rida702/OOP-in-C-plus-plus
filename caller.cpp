#include<iostream>
using namespace std;
//{ }
class Point { 
	int x, y;
	public:
		Point () { x = y = 0; }
		Point ( int x, int y) { 
		this->x = x;
		this->y = y;
	}
	
	int getX ( ) const { return x; }
	int getY ( ) const { return y; }
};

	bool isSame ( const Point &p1, const Point &p2 ) { 
	return ( p1.getX()==p2.getX() && p1.getY()==p2.getY() );
	}
	bool isDifferent ( const Point &p1, const Point &p2 ) { 
	return ( p1.getX()!=p2.getX() || p1.getY()!=p2.getY() );
	}

int main () {
	Point p1( 3,3), p2( 4,3);
	if ( isSame(p1,p2))				cout << "Both are same\n";
	else							cout << "Both are different\n";
	if ( isDifferent(p2,p1))		cout << "Both are different\n";
	else							cout << "Both are same\n";
	return 0;

}
