#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
   if(n==1) return 0;
   int x= josephus(n-1,k);
   cout<<x<<"x"<<endl;
   int y=(x+k)%n;
   return y;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
       // cout<<josephus(n,k)<<endl;
       josephus(n,k);
    }
    return 0;
}
