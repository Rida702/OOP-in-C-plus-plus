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
	
	bool operator < ( const Point &p){
		return ( this->x < p.x && this->y < p.y);
	}
	
	bool operator > ( const Point &p){
		return ( this->x > p.x && this->y > p.y);
	}
};

int main (){
	Point p1(3,4),p2(2,3);
	p1.display();
	p2.display();
	cout << "\n-------------\n";
	bool ans = p1 < p2;
	cout << ans;
	ans = p1 > p2;
	cout << ans;
	return 0;
}
