#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int countCommonElements (int *a1, int SIZE1, int *a2, int SIZE2)
{ 
   int i, j, count =0;
   for ( i=0; i< SIZE1; i++)
        for ( j=0; j< SIZE2; j++)
   {
   	    if ( a1[ i ] == a2[ j ])
   	    count++;
   }
   cout << "Number of common elements in both arrays: " << count << '\n';
}
 int main()
{ 
    int array1[ 8 ] = { 24, 45, 34, 45, 84, 28, 85, 22 }, array2[ 7 ] = { 34, 55, 24, 65, 54, 78, 92 };
    countCommonElements (array1, 8, array2, 7);
}
