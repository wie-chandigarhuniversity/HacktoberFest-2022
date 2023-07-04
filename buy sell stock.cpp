#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int sum=0,sum2=0;
    string s;
    cin>>s;
    int num=s.length()/2;
    for(int i=0;i<num;i++)
    {
        sum=sum+(s[i]-'0');
    }
    for(int i=num;i<s.length();i++)
    {
        sum2=sum2+(s[i]-'0');
    }
    if(sum==sum2)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    }
}
