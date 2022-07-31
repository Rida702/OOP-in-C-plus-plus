#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findMaxElement (int **a, const int ROWS, const int COLS)
{
	int i,j, max=0;
	for( i=0; i<ROWS; i++)
	{
	   cout << "Row " << i+1 << '\t';
	   for( j=0; j<COLS; j++)
	    {
	        a[i][j] = rand() % 50 + 50;
	        cout << a[i][j] << '\t' << '\t';
	        if ( a[i][j] > max )
	        max = a[i][j];
	    }
	    cout << '\n' << '\n';
	}
	cout << "Maximum value of 2D array is: " << max << '\n';
} 

int main()
{
	srand(time(0));
	int rows,columns, **x, k, i;
	cout << "Enter Row & column size:";
	cin >> rows >> columns;
	x =new int *[rows] ;
	for (i = 0 ; i < rows ; i++)
	{
		x[i] = new int [columns] ;
	}
	cout << "\n-------------------------\n";
	for( k=0; k<columns; k++)
	cout << '\t' << "Column " << k+1 << ' ';
	cout <<'\n' << '\n';
	findMaxElement  (x, rows, columns);
    return 0;
}
