#include<iostream>
using namespace std;
//in case of static always Deep copy is created no matter we use default copy constructor
//or assignment operator or we make them / overload them explicitly
class Point { 
	int y, x;
public:
	
	
	Point ( ){ x = y = 0; }
	Point ( int x1, int y1){
	x = x1;
	y = y1;
	}
	void setX ( int x){
	this->x = x;
	}
	void setY ( int y){
	this->y = y;
	}

	Point ( const Point &p){
		cout << "Copy constucor called\n";
		this->x = p.x;
		this->y = p.y;
	}
	
	/*Point operator = ( const Point &p){
		cout << "Assignment operator called.\n";
		Point newp = *this; <-*this is creating an error when we called assignment operator copy const also called
		newp.x = p.x;
		newp.x = p.x;
		return newp;
	}*/
	
	/*Point operator = ( const Point &p){
		cout << "Assignment operator called.\n"; // this isn't copying any values returns same values
		Point newp;
		newp.x = p.x;
		newp.x = p.x;
		return newp;
	}*/
	
	Point operator = ( const Point &p){
		cout << "Assignment operator called.\n";
		this->x = p.x;
		this->y = p.y;
	}

	void show () { 
	cout << "X: " << x << ',' << " Y: " << y << endl;
	}
	
};

int main ( ){ 
	Point p1(1,2),p2(3,4);
	p1.show();
	p2.show();
	p1 = p2;    //Assignment operator for existing objects also copy const is being called here
	p1.show();
	p2.show();
	Point p3 = p1; //only copy const called
	p1.show();
	p3.show();
	p1.setX(2);
	p1.setY(4);
	p1.show();	//Deep copy is created in case of static objects
	p2.show();
	p3.show();
	return 0;
}
