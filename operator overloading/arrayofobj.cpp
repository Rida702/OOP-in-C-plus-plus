#include<iostream>
using namespace std;
//correct
class Doctor{
	char name[20];
	int ID;
	int experience;
	char address[20];
public:
	Doctor (){ 		}
	void input ( ) {
		cout << "Your Name: ";
		cin >> name;
		cout << "Your ID: ";
		cin >> ID;
		cout << "Your Experience: ";
		cin >> experience;
		cout << "Your Address: ";
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
