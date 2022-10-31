#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=(ans*2)%mod;///ans=1*2=2,ans=2*2=4,ans=4*2=8.
    }
    cout<<ans;

}
