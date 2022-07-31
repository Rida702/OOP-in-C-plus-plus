#include <iostream>
using namespace std;

class Runner{
public:
	string  runner_name;
	int covered_distance;

Runner () {
	runner_name = "";
	covered_distance = 0;
}

void Input_values () {
	cout << "Enter runner's Name: ";
	cin >> runner_name;
	cout << "Enter Distance covered by runner: ";
	cin>> covered_distance;
}
		
void  Display () {
	cout << "Name of the Runner: "<< runner_name << endl;
	cout << "Distance covered by runner is: " << covered_distance << endl;
}
		
~Runner () {				}
	
};


int main()
{
	Runner obj1, obj2;
	obj1.Input_values();
	obj2.Input_values();
	cout << "\n------------Result-------------\n";
if (obj1.covered_distance > obj2.covered_distance) {
		cout << "Runner 1 covered max distance." << endl;
		obj1.Display(); }
else {
	cout << "Runner 2 covered max distance." << endl; 
	obj2.Display();}
}
