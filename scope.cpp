#include<iostream>
using namespace std;

class Cube { 
	int x;
	public:
		void setX ( const int x ){ 
		this->x = x;
}
		int takecube(int);
		int takesquare();
};

int Cube::takesquare(){ 
	return x*x;
}

int Cube::takecube( const int X  ){ 
	int cube = X*X*X;
	return cube;
}

int main () {
	Cube p1;
	int x = 5;
	p1.setX(3);
	cout << "Square is , " << p1.takesquare() << endl ;
	cout << "Cube is , " << p1.takecube(x) << endl ;
	return 0;
}
