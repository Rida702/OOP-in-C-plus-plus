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
	bool isSame ( const Point &p ) { 
	return ( x==p.x && y==p.y );
	}
	bool isDifferent ( const Point &p ) { 
	return ( x!=p.x || y!=p.y );
	}
};

int main () {
	Point p1( 3,3), p2( 4,3);
	if ( p1.isSame(p2))				cout << "Both are same\n";
	else							cout << "Both are different\n";
	if ( p2.isDifferent(p2))		cout << "Both are different\n";
	else							cout << "Both are same\n";
	return 0;
	
	return 0;
}
