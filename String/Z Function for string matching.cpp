// String Pattern matching using Z function
#include<bits/stdc++.h>
using namespace std;

void fin_prefix(string s,string pat)
{
    int n=s.length();
    int ar[n]={0};
    int l=0,r=0;
    for(int i=1;i<n;i++)
    {
        if(r>=i)
        {
            ar[i]=min(r-i+1,ar[i-l]);
        }
        while(ar[i]+i<n && s[i+ar[i]]==s[ar[i]])ar[i]++;
        if(i+ar[i]>r){
            l=i;r=i+ar[i]-1;
        }
    }
    for(auto i:ar)cout<<i<<" ";
    cout<<'\n';
}


int main()
{
    string s,pattern;
    cin>>s>>pattern;
    fin_prefix(s,pattern);
    return 0;
}
