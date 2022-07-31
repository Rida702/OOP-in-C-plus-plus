#include<iostream>
using namespace std;
//wrong
class Doctor{
	char *name;
	int ID;
	int experience;
	char *address;
public:
	Doctor (){ 		}
	void input ( ) {
		cout << "Your Name: ";
		name = new char[20];
		cin >> name;
		cout << "Your ID: ";
		cin >> ID;
		cout << "Your Experience: ";
		cin >> experience;
		cout << "Your Address: ";
		address = new char[20];
		cin >> address;

	}
	
};
	

int main (){
	Doctor d[5];
	int i;
	for ( i =0; i<5; i++){
		cout << "\nData of Doctor " << i+1 << endl;
		d[i].input();
	}
	
	return 0;
}
