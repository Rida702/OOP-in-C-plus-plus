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
	Point *p1,*p2;
	p1 = new Point;
	p2 = new Point;
	p1->setX(2);
	p1->setY(3);
	p2->setX(5);
	p2->setY(4);
	p1->show();
	p2->show();
	*p2 = *p1;
	p1->show();
	p2->show();
	Point *p3 = p1;  //Default copy constuctor called does shallow copy
	p3->show();
	Point p4 = Point(*p2);	//explicitly defined copy constructor is called which creates deep copy
//	Point *p4 = p2;	//copy constructor not called
//	Point *p4 = Point(*p2); //throws an error here
	p4.show();
	//p4->show();
	p1->setX(0);
	p1->setY(0);
	cout << "After change in value of p1: " << endl;
	p1->show(); //shallow copy of p1 in p3
	p2->show();
	p3->show();  // has similar value as P1
	p4.show();  //Deep copy in P4 retains its value
	//p4->show(); 
	return 0;
}
