#include <iostream>
using namespace std;

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
	
};

int main (){
	Point p1(3,4),p2(2,3), p3(1,1),p4(1,1),p5(2,1);
	p1.display();
	p2.display();
	p3.display();
	p4.display();
	p5.display();
	cout << "\n-------------\n";
	
}
