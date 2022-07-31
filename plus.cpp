#include<iostream>
using namespace std;

class Numbers{
	int p,q;
public:
	Numbers ( int x1, int y1 )	{
		p = x1;
		q = y1;
	}
	Numbers& operator += ( const Numbers &p1){
		this->p = this->p + p1.p;
		this->q = this->q + p1.q;
		return *this;
	}
	
	/*Numbers& operator -= ( const Numbers &p1){
		this->p = this->p - p1.p;
		this->q = this->q - p1.q;
		return *this;
	}*/
	
	void show ( ){
		cout << " Numbers are: " << p << " , " << q << endl;
	}
	
};

int main ( ){
	Numbers n1(4,5),n2(3,2);
	n1.show();
	n2.show();
	n1 +=n2;		 
	cout << "\n\nAfter addition";
	n1.show();
	/*n1 -=n2;
	cout << "\n\nAfter subtraction";
	n1.show();*/
	return 0;
}
