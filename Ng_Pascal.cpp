#include<iostream>
using namespace std;

int factorial(int x) {
   int factorial,i;
   for ( i = 0; i <= 1; i++)
   {
     factorial = 1;
   }
   for ( i = 2; i <= x; i++)
   {
     factorial *= i;
   }
   return factorial;
}

int permutation(int n,int r) {
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

int pastriangle(int n){
    int a,b;
    for ( a = 0; a < n ; a++)
    {
        for ( b = 0; b <= a; b++){
            cout<<permutation(a,b)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pastriangle(n);
    return 0;
}
