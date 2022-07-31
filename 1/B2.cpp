#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

 int countAlphabets (char *a, const int SIZE)
{
	int i, countcapital=0, countsmall;
	for ( i=0; i<SIZE; i++)
	{
		if ( a[ i ] >=65 && a[ i ] <= 90 ) 
		countcapital++;
		else if( a[ i ] >=97 && a[ i ] <=122 )
		countsmall++;
	}
	cout << "Number of capital alphabets: " << countcapital << '\n';
	cout << "Number of small alphabets: " << countsmall << '\n';
} 

int main()
{
	srand(time(0));
	#define size 30
	char x[ 255 ];
	int i;
	for ( i=0; i<size; i++)
	{
		x[ i ] = rand() % 256;
		cout << x[ i ] << ' ';
	}
	cout << "\n-----------------------------\n";
	countAlphabets (x,size);
    return 0;
}
