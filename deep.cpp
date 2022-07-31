#include<iostream>
using namespace std;

class Point { 
	int y, x;
public:
	
	
	Point ( ){ x = y = 0; }
	Point ( int x1, int y1){
	setX(x1);
	setX(y1);
	}
	void setX ( int x){
	this->x = x;
	}
	void setY ( int y){
	this->y = y;
	}
/*	Point (const Point &p ) {
	x = p.x;
	y = p.y;
	cout << "Copy constructor called. \n";
	}*/
	
	/*Point& operator = ( const Point& t ){ 
	cout << "Assignment operator called. \n";
	x = t.x;
	y = t.y;
	return *this;
	}*/
	
/*	void operator = (const Point &D ) { 
        x = D.x;
        y = D.y;
        cout << "Assignment no 2 operator called. \n";
      }*/

	void show () { 
	cout << "X: " << x << ',' << " Y: " << y << endl;
	}
	
};

int main ( ){ 
	Point *p1, *p2;
	p1 = new Point;
	p2 = new Point;
	p1->setX(6);
	p1->setY(7);
	p2->setX(8);
	p2->setY(4); 
	p1->show();
	p2->show();
//	cout << "\n\nAssignment is supposed to be called here.\n\n";
	*p1 = *p2;
	p1->show();
	p2->show();
//	p3->show();
//	cout << "\n\nCopy Constructor is supposed to be called here.\n\n";
	Point p3;
	p3 = Point (*p2);
//	cout << "\n\nAssignment is supposed to be called here.\n\n";
//	p2 = p1;
	p1->show();
	p2->show();
	p3.show();
	
	cout << "\n\nNow we are changing values to check deep or shallow copy.\n\n";
	p2->setX(6);
	p2->setY(8);
	p1->show();
	p2->show();
	p3.show();
	cout << "\n\nShallow copy created.\n\n";
	
	return 0;
}
