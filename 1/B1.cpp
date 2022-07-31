#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int countElementsInOrder (int *src, const int SIZE)
{
	int i, count=0;
	for( i=0; i<SIZE; i++)
	{
		if ( src[ i ] <= src[ i+1 ] )
		count++;
	}
    cout << count << '\n';
}

int main()
{ 
    srand(time(0));
    #define size 10
    int src[ size ], i, count=0;
    for ( i=0; i<size; i++)
    { 
	    src[ i ] = rand() % 100 + 1;
	    cout << src[ i ] << ' ';
    }
    cout << "\n---------------------\n";
    countElementsInOrder (src,size);
    return 0;
}
