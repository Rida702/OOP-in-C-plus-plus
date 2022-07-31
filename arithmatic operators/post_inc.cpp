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
	
	Point operator ++ (int){
		this->x++;
		this->y++;
		return *this;
	}
};

int main (){
	Point p1(3,4),p2(2,3);
	p1.display();
	p2.display();
	cout << "\n------after post increment------\n";
	p1++; //error
	p2++; //error (because post increment operator called but we defined pre increment operator above
	p1.display();
	p2.display();
	return 0;
}
