#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

 int countVowels (char *a, const int SIZE)
{
   int i, count=0;
   for (i=0; i<SIZE; i++)
   {
    if ( a[ i ] == 'A' || a[ i ] == 'a' || a[ i ] == 'E' || a[ i ] == 'e' || a[ i ] == 'I' || a[ i ] == 'i' || a[ i ] == 'O' || a[ i ] == 'o' || a[ i ] == 'U' || a[ i ] == 'u' )
    count++;
   } 
   cout << "Number of vowel alphabets are: " << count << '\n';
}
int main()
{
	srand(time(0));
	#define size 10
	char x[ size ];
	int i;
	for ( i=0; i<size; i++)
	{
		if ( i < 5 )
		x[ i ] = rand() % 26 + 'A';
		else x[ i ] = rand() % 26 + 'a';
		cout << x[ i ] << ' ';
	}
	cout << "\n-----------------------------\n";
	countVowels (x,size);
    return 0;
}
