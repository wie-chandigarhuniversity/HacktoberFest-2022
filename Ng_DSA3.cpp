#include<iostream>
using namespace std;

int getdrops(int arr[] , int n){
    int lmax[n];
    int rmax[n];
    lmax[0] = arr[0]; 
    for(int i=1; i<n; i++){
        lmax[i] = max(lmax[i-1], arr[i]); 
    }
    rmax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        rmax[i] = max(rmax[i+1], arr[i]); 
    }

    int res = 0;
    for (int i = 1; i < n-1; i++)
    {
        res = res + (min(rmax[i], lmax[i]) - arr[i]);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<getdrops(arr,n)<<" ";
    return 0;
}
