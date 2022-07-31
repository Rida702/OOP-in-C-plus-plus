#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 int countOccurence (int *src, const int ELEMENT, const int SIZE)
{
	int i;
    for ( i=0; i<SIZE; i++)
    { 
	    if ( src[ i ] == ELEMENT )
	    cout << "Index" << ' ' << i << '\n';
    }
}

int main()
{ 
    int src[ 8 ] = {64, 15, 33, 35, 74, 33, 98, 32};
    countOccurence (src, 33, 8);
    return 0;
}
