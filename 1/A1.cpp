#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void inverse (int *trg, int *src, const int SIZE)
{ 
    int i;
    for ( i=0; i<SIZE; i++)
    trg[ i ] = -1 * src[ i ];
}

int main()
{ 
    srand(time(0));
    #define size 10
    int src[ size ], i , trg[ size ];
    for ( i=0; i<size; i++)
    { 
	    src[ i ] = rand() % 100 - 50;
	    cout << src[ i ] << ' ';
    }
    cout << "\n---------------------\n";
    inverse(trg, src, size);
    for ( i=0; i<size; i++)
    cout << trg[ i ] << ' ';
    cout << "\n---------------------\n";
    return 0;
}
