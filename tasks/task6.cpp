#include<iostream>
using namespace std;

class player{
	string name;
	float average;
	string team;  
public:
	player () {}
	player(string n,float a,string t) {
		name = n;
		average = a;
		team = t;
}
	
void get_Input (){
		cout<<"Name is: ";
		cin >> name;
		cout << "\nAverage is: ";
		cin >> average;
		cout << "\nTeam is: ";
		cin >> team;	
}
	
void change_Input() {
	
	cout <<"\nChanged Name: ";
	cin >> name;
	cout <<"\nChanged Average is: ";
	cin >> average;
	cout << "\nChanged team name is: ";
	cin >> team;	
}
	
void show () {
		cout << "Your Entered Name is: " << name << endl;
		cout << "Your Entered Average is: " << average << endl;
		cout << "Your Entered Team name  is: " << team << endl;
}
~player() {			}
};

int main(){	
	player p1;
	p1.get_Input();
	p1.show();
	p1.change_Input();
	p1.show();
    return 0;
}
