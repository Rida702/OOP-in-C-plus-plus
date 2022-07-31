#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int countDifferentElements (int *a1, const int SIZE1, int *a2, const int SIZE2)
{ 
   int i, j, count =0;
   for ( i=0; i< SIZE1; i++)
        for ( j=0; j< SIZE2 ; j++)
   {
   	    if ( a1[ i ] == a2[ j ] )
			count++;   
   }
   cout << "\n---------------------\n";
   cout << "Number of different elements in both arrays: " << SIZE1 + SIZE2 - 2*count << '\n';
}
 int main()
{ 
    int array1[ 8 ] = { 24, 45, 34, 45, 84, 28, 85, 22 }, array2[ 7 ] = { 34, 55, 24, 65, 54, 78, 92 };
    countDifferentElements(array1, 8, array2, 7);
}
