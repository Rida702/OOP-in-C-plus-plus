#include <iostream>
using namespace std;

class time {
	int hours;
	int minutes;
	int seconds;
public:
	time ( ) {
		hours = minutes = seconds = 0;
	}
	
	time ( int h, int m, int s) {
		if ( h>=0 && h<=24 )
			hours = h;
		else hours =0;
		if ( m>=0 && m<=60 )
			minutes = m;
		else minutes =0;
		if ( s>=0 && s<=60 )
		seconds = s;
		else seconds =0;
	}
	void display () {
		cout << hours << ":" << minutes << ":" << seconds <<endl;
	}
	
	time operator += ( const time t){
		this->seconds += t.seconds;
		if ( this->seconds == 60 ){
			this->seconds = 00;
			this->minutes +=1;
		}
		if ( this->seconds > 60  ){
			this->seconds -= 60;
			this->minutes +=1;
		}
		
		this->minutes += t.minutes;
		if ( this->minutes == 60 ){
			this->minutes = 00;
			this->hours +=1;
		}
		if ( this->minutes > 60  ){
			this->minutes -= 60;
			this->hours +=1;
		}
		this->hours += t.hours;
		if ( this->hours == 12 && this->minutes == 0 && this->seconds == 0){
			this->hours = 12;
		}
		if ( this->hours > 12 ){
			this->hours -= 12;
		}
		return *this;
	} 
};

int main () {
	time t1(0,24,35), t2(11,35,25), t3;
	t1.display();
	t2.display();
	t1+=t2;
	t1.display();
	return 0;
}
