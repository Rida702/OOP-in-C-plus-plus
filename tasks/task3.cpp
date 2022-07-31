#include "iostream"

using namespace std;

class Angle {
	int degres;     
	float minutes;      
	char direction;
public:
        Angle( int de, float m, char d ) {
			degres = de;
			minutes = m;
			direction = d;   
		}  
		                                       
		void get_value( ){  
			cout << "Enter Degrees Minutes and Direction (E, W, S, N): ";
            cin >> degres >> minutes >> direction;
        }
        
        void show( ) const {           
		cout << degres << "\xF8" << minutes << "' " << direction << endl;          
		 }
};

int main(){
            Angle a1(60,43.9,'S');
            cout << "By Default Value of Angle is: ";     a1.show( );
            a1.get_value( );
            cout << "Your Entered Value of Angle is: ";  a1.show( );
            //system("pause");
}
