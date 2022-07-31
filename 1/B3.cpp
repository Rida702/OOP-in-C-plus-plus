#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printEvenOddCount(int a[][10], const int ROWS)
{
	int i, j, counteven=0, countodd=0;
	for( i=0; i<ROWS; i++)
	{
	   for( j=0; j<10; j++)
	    {
	        a[i][j] = rand() % 50 + 50;
	        cout << a[i][j] << ' ' << ' ';
	        if( a[i][j]%2==0 )
	        counteven++;
	        else countodd++;
	    }
	    cout << '\n';
	    cout << "Row " << i+1 << " has " << counteven << " even and " << countodd << " odd values. " << '\n' << '\n';
	    counteven=0;
	    countodd=0;
	} 
}
int main()
{
	srand(time(0));
	int rows, x[rows][10], i, j;
	cout << "Enter Row size:";
	cin >> rows;
	cout << "\n-------------------------\n";
	printEvenOddCount( x, rows);
    return 0;
}
