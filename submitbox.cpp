#include<iostream>
using namespace std;
class Box{
	int l,b,h;
public:
	Box () { l = b = h =0; }
	Box ( int length, int breadth, int height ) {
		l = length;
		b = breadth;
		h = height;
	}
	Box ( const Box &b){
		this->l = b.l;
		this->b = b.b;
		this->h = b.h;
	}
	
	int getLength () const {
		return l;
	}
	int getBreadth () const {
		return b;
	}
	int getheight() const {
		return h;
	}
	long long CalculateVolume () {
		return l*h*b;
	}
	
	bool operator < ( const Box& b){
		if( this->l < b.l ) 
			return true;
		else if ( this->b<b.b && this->l==b.l )
			return true;
		else if ( this->h<b.h && this->b==b.b && this->l==b.l)
			return true;
		else return false;
	}
	
	friend ostream& operator << (ostream& os, const Box& b){
		os << b.l << " " << b.b << " " << b.h << endl;
	}
};

int main () {
	Box b1; 
	Box b2(2, 3, 4); 
	b2.getLength();	
	b2.getBreadth();
	b2.getheight();	
	b2.CalculateVolume(); 
	bool x = (b1 < b2);	
	cout<<b2; 
}
