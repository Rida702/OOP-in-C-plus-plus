#include<iostream>
using namespace std;

class Travel{	
public:	
	int kms,hours;
	Travel();
	void Input_values();
	void Display();
	Travel addition (Travel);
	
};
Travel::Travel(){
		kms = 0;
		hours = 0;
}

void Travel:: Input_values(){
		cout <<"\nEnter value in Kilometers: ";
		cin >> kms;
		cout <<"Enter hours: ";
		cin >> hours;
			
	}
void Travel:: Display(){
		cout<<"\nValue in Kilometers is: "<< kms << endl;
			cout<<"Value in Hours is: "<< hours << endl;
	}
	
Travel Travel:: addition(Travel t ){
	Travel newT;
	newT.kms = this->kms + t.kms;
	newT.hours = this->hours+ t.hours;
	return newT;
}
int main(){
	Travel obj1,obj2,obj3;
	obj1.Input_values();
	obj2.Input_values();
	obj3 = obj1.addition(obj2);
	obj3.Display();
	return 0;	
}
