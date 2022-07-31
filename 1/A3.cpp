#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

 void print2D (int a[5][5], const int ROWS)
{
	int i,j;
	for( i=0; i<ROWS; i++)
	{
	   cout << "Row " << i+1 << '\t';
	   for( j=0; j<5; j++)
	    {
	        a[i][j] = rand() % 100 + 1;
	        cout << a[i][j] << '\t' << '\t';
	    }
	    cout << '\n' << '\n';
	}    
} 

int main()
{
	srand(time(0));
	int rows, x[rows][5];
	cout << "Enter Row size:";
	cin >> rows;
	cout << "\n-------------------------\n";
	cout << '\t' << "Column 1" << '\t' << "Column 2" << '\t' << "Column 3" << '\t' << "Column 4" << '\t' << "Column 5" << '\n' << '\n';
	print2D( x, rows);
    return 0;
}
