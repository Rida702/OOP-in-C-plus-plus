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
	//less than
	bool operator < ( const Point &p){
		return ( this->x < p.x && this->y < p.y);
	}
	//greater than
	bool operator > ( const Point &p){
		return ( this->x > p.x && this->y > p.y);
	}
	//less than equal to
	bool operator <= ( const Point &p){
		return ( this->x <= p.x && this->y <= p.y);
	}
	//greater than equal to
	bool operator >= ( const Point &p){
		return ( this->x >= p.x && this->y >= p.y);
	}
	//equal to
	bool operator == ( const Point &p){
		return ( this->x == p.x && this->y == p.y);
	}
	//not equal
	bool operator != ( const Point &p){
		return ( this->x != p.x && this->y != p.y);
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
	cout << "check for less than: " << endl;
	if ( p1 < p2 )		cout << "p1 is less than p2" << endl;
	else 				cout << "p1 is greater than p2" << endl;
	
	cout << "\ncheck for greater than: " << endl;
	if ( p1 > p2 ) 		cout << "p1 is greater than p2" << endl;
	else				cout << "p1 is less than p2" << endl;
	
	cout << "\ncheck for less than equal to: " << endl;
	if ( p1 <= p2 )		cout << "p1 is less than equal to p2" << endl;
	else 				cout << "p1 is greater than p2" << endl;
	
	cout << "\ncheck for greater than equal to: " << endl;
	if ( p3 >= p5 )		cout << "p3 is greater than equal to p5" << endl;
	else 				cout << "p3 is less than p5" << endl;

	cout << "\ncheck for equal to: " << endl;
	if ( p3 == p4 )		cout << "p3 is equal to p4" << endl;
	else 				cout << "p3 is not equal to p4" << endl;
	
	cout << "\ncheck for not equal: " << endl;
	if ( p4 != p5 )		cout << "p4 is not equal to p5" << endl;
	else 				cout << "p4 is equal to p5" << endl;
	return 0;
}
