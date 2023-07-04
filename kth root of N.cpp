//kth root of n
#include<bits/stdc++.h>
using namespace std;

double fun(double temp,int k){
    double ans=1.0;
    for(int i=1;i<=k;i++){
        ans*=temp;
    }
    return ans;
}

int main()
{
    int n=10,k=2;
    cin>>n>>k;
    double lo=1.0,hi=n;
    double ans=1.0;
    while(hi-lo>1e-4)
    {
        double mid=lo+((hi-lo)/2);
        if(pow(mid,k)<n){ans=mid;lo=mid;}
        else {ans=mid;hi=mid;}
    }
    cout<<fixed;
    cout<<setprecision(10);
    cout<<ans<<'\n';
    return 0;
}
