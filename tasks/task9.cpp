#include <iostream>
using namespace std;

class Car{
    string  direction;
    string name;
    int position;
public:
    Car( string n, string d, float p ) {
        name = n;
        direction = d;
        position = p;
}

void Turn() {
        if ( direction == "E" ) 
        {
            direction == "S";
        }
        else if ( direction == "S" )
        {
            direction == "W";
        }
        else if ( direction == "W" )
        {
            direction == "N";
        }
        else if ( direction == "W" )
        {
            direction == "N";
        }
    }

void Turn ( string dir ){
        direction = dir;
}
    
string get_Turn(){
    return direction;
}

void set_Position( float p ){
    position = p;
}

int get_Position(){
    return position;
}
 
Car () {				}
};

int main(){
	Car obj1("t", "N", 4);
    obj1.Turn();
    cout << obj1.get_Turn() << endl;
    obj1.Turn("W");
    cout << obj1.get_Turn() << endl;
    obj1.set_Position(90);
    cout << obj1.get_Position() << endl;
}
