#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

 int countVowels (char *a)
{
    int i, count=0;
   for (i=0; a[ i ]!='\0'; i++)
   {
    if ( a[ i ] == 'A' || a[ i ] == 'a' || a[ i ] == 'E' || a[ i ] == 'e' || a[ i ] == 'I' || a[ i ] == 'i' || a[ i ] == 'O' || a[ i ] == 'o' || a[ i ] == 'U' || a[ i ] == 'u' )
    count++;
   } 
   cout << "Number of vowel alphabets are: " << count << '\n';
} 

int main()
{
	char x[ 500 ] = "Hello I am Rida Shabbir";
	countVowels (x);
    return 0;
}
