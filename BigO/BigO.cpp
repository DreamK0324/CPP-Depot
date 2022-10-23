#include <iostream>
using namespace std;
int main(){

/* asymptotic time complexity */

//// O(1):
int i = 1;
int j = 2;
++i;
j++;
int m = i + j;


//// O(n):
for(i=1; i<=n; ++i)  // O(1)
{
   j = i;            // O(n)
   j++;              // O(n)
}
                // O(1+2n) => O(n)


//// O(log n):
int i = 1;
while(i<n)           // n = 2^x  =>  x = log(2^n) 
{
    i = i * 2;
}


//// O(nlog n):
for(m=1; m<n; m++)    
{
    i = 1;
    while(i<n)
    {
        i = i * 2;
    }
}


//// O(n^2):
for(x=1; x<=n; x++)       // n can be repersented by any letter, n => m => O(mn)
{
   for(i=1; i<=n; i++)
    {
       j = i;
       j++;
    }
}

//// O(m+n):
/// @return 
for (int i=0;i<1000;i++){      // O(1)
    cout << println(i);   
}
for (int j=0;j<m;j++){         // O(m)
    cout << println(j);
}
for (int k=0;k<n;k++){         // O(n)
    cout << println(k);
}


//// O(n^3), O(n^k), ...


/* asymptotic space complexity */


//// S(n) = O(1):
int i = 1;
int j = 2;
++i;
j++;
int m = i + j;


//// S(n) = O(n):
int[] m = new int[n]
for(i=1; i<=n; ++i)
{
   j = i;
   j++;
}












return 0;
}