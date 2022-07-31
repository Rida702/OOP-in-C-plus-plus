#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int countCommonElements (int *a1, int *a2, const int SIZE)
{ 
   int i, j, count =0;
   for ( i=0; i< SIZE; i++)
        for ( j=0; j< SIZE; j++)
   {
   	    if ( a1[ i ] == a2[ j ])
   	    count++;
   }
   cout << "Number of common elements in both arrays: " << count << '\n';
}
 int main()
{ 
    #define size 8
    int array1[ size ] = { 24, 45, 34, 45, 84, 28, 85, 22 }, array2[ size ] = { 34, 55, 24, 65, 54, 78, 22, 92 };
    countCommonElements (array1, array2, size);
}
