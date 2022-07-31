#include <iostream>
using namespace std;

class tollBooth{
	unsigned int paying_cars;
	unsigned int non_paying_cars;
	double total_toll;
	public:
	tollBooth(){
		paying_cars =0;
		non_paying_cars=0;
		total_toll=0;
	}
	Car_pay(){
		paying_cars++;
		total_toll=total_toll+0.50;
	}
	Non_Car_pay(){
		non_paying_cars++;
	
	}
	void display() const{
		cout<<"---------------------------------------------\n";
		cout<<"Total_cars with pay: "<<paying_cars<<"\n\n";
			cout<<"Total_cars without pay: "<<non_paying_cars<<"\n\n";
		cout<<"Total_amount: "<<total_toll<<"\n";
		cout<<"---------------------------------------------\n";
	}
};
int main(){
	tollBooth t1;
	int x;
	
	while (true){
	cout<<"Enter 1 For Toll Paying Cars and 2 For Non-Toll Paying Cars = ";
	cin>>x;
	
	if (x==1){
	t1.Car_pay();
	t1.display();
	}
	else if (x==2){
	t1.Non_Car_pay();
	t1.display();}

	else if(x==27){
		cout<<"Escape key";
			t1.display();
	}
	else{
		cout<<"Wrong input"<<"\n";}
	
	cout<<"1 for continue 2 for break: ";
	cin>>x;
	if (x==2){
		break;}
	else{
		continue;
	}
}
	return 0;
}
