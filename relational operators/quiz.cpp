#include <iostream>
using namespace std;
class Doctor
{
private:
	int id;
	int exp;
public:
	char name[20] = { 'D' , 'O' , 'C' , 'T' , 'O' , 'R' };
	char address[20] = { 'L' , 'O' , 'N' , 'D' , 'O' , 'N' };

	void set_id(int i)
	{
		id = i;
	}
	
	void set_exp(int e)
	{
		exp = e;
	}

	int get_id()
	{
		return id;
	}

	int get_exp()
	{
		return exp;
	}

	Doctor()
	{		
		cout << name << endl;
		cout << address << endl;
	}
};

class Patient
{
public:
	char name_pat[20];
	char address_pat[20];
	char email_pat[20];
	int phone;

	static char name[20];
	static char address[20];
	static char email[20];
	static int phone_num;

	Patient(char n[] , char a[] , char e[], int p)
	{
		for(int i = 0 ; i < 20 ; i++ )
		{
			name_pat[i] = n[i];
			address_pat[i] = a[i];
			email_pat[i] = e[i];
		}
			phone = p;
	}
	 
	Patient(Patient &p) 
	{
		for (int i = 0; i < 20; i++)
		{
			name_pat[i] = p.name_pat[i];
			email_pat[i] = p.email_pat[i];
			address_pat[i] = p.address_pat[i];
		}
		phone= p.phone;
	}
	
	void display()
	{
		cout << "Name: " ;
		for (int i = 0; i < 20; i++)
		{
			cout << name_pat[i];
		}
		cout << endl;

		cout << "Email: ";
		for (int i = 0; i < 20; i++)
		{
			cout << email_pat[i];
		}
		cout << endl;

		cout << "Address: ";
		for (int i = 0; i < 20; i++)
		{
			cout << address_pat[i];
		}
		cout << endl;

		cout << "ph: " << phone << endl;
	}

	static void print()
	{
		cout << "Name: ";
		for(int i = 0; i < 20 ; i++)
		{
			cout << Patient :: name[i];
		}
		cout << endl;
		
		cout << "email: ";
		for (int i = 0; i < 20; i++)
		{
			cout << Patient::email[i];
		}
		cout << endl;
		cout << "address: ";
		for (int i = 0; i < 20; i++)
		{
			cout << Patient::address[i];
		}
		cout << endl;
		
		cout << "\nPhone number: " << Patient::phone_num;

	}

};

int Patient::phone_num = 90;
char Patient::name[20] = {'J' , 'O' ,'N'};
char Patient::email[20] = { 'J' , 'O' ,'N' , '@' ,'G','M','A','I','L','.','c','o','m' };
char Patient::address[20] = { 'L' , 'O' ,'N' , 'D' , 'O' ,'N'};

int main()
{	
	int id_d = 50;
	int exp_d = 10;
	char n[20] = {'J' , 'A' , 'M' , 'E' , 'S'};
	char a[20] = {'L' , 'A' , 'H' , 'O' , 'R' , 'E'};
	char e[20] = { 'J' , 'A' , 'M' , 'E' , 'S' , '@' ,'G','M','A','I','L','.','c','o','m'};
	int ph = 50;
	
	cout << "//DOCTOR:\n";
	cout << "~~~~Constructor:~~~~\n";
	Doctor d1;

	cout << "~~~~Setter/Getter:~~~~\n";
	Doctor d2;
	d1.set_id(id_d);
	d1.set_exp(exp_d);
	cout << "Doctor's ID: " << d1.get_id() << endl;
	cout << "Doctor's experience: " << d1.get_exp() << endl;

	cout << "\n//PATIENT:\n";
	cout << "~~~~Static:~~~~\n";
	Patient::print();
	cout << "\n\n";

	Patient p1(n , a, e, ph);
	Patient p2 = p1;
	cout << "~~~~Constructor:~~~~\n";
	p1.display();

	cout << "~~~~Copy Constructor:~~~~\n";
	p2.display();
	return 0;
}
