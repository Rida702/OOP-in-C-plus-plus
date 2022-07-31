#include <iostream>
using namespace std;

class Bank{
	
	string name;
	int account_No;
	string account_Type;
	int balance;
public:
	Bank ( string n, int acc, string acc_t , int b ) {
		name = n;
		account_No = acc;
		account_Type = acc_t;
		balance = b;
}
				
void Input_values( string n, int acc, string acc_t, int b ) {
		name = n;
		account_No = acc;
		account_Type = acc_t;
		balance = b;
}
		
void bank_Deposit( int deposit_amount ){
	
	balance += deposit_amount;
}
		
void bank_Withdrawl (int withdrawl_amount ){
		if( withdrawl_amount>balance )
		  	cout << "Widthdrawl not possible. You don't have enough money." << endl; 
			balance -=	withdrawl_amount;
		if ( balance<0 ) 	balance =0;
}
		
void show () const{
	cout << "Name is: " << name << endl;
	cout << "Account Number is: " << account_No << endl;
	cout << "Account Type is: " << account_Type << endl;
	cout << "Balance in account is: "<< balance << endl;
}	
~Bank () {			}	
};

int main(){	
	int account_Number;
	string user_name, account_Type;
	int user_balance;
	
	cout << "Enter your good name: ";
	cin >> user_name;
	cout << "Enter your Account No: ";
	cin >> account_Number;
	cout << "Enter your account Type: ";
	cin >> account_Type;
	cout << "Enter your balance. ";
	cin >> user_balance;
	Bank obj1( user_name, account_Number, account_Type, user_balance );
	//1st Withdrawl
	obj1.bank_Deposit(500);
	obj1.show();
	obj1.bank_Withdrawl(200);
	obj1.show();
	//2nd Withdrawl
	obj1.bank_Deposit(500);
	obj1.show();
	obj1.bank_Withdrawl(2000);
	obj1.show();
	return 0;
	
}
