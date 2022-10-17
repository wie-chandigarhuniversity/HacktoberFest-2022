#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,low,mid,high,key;
    cout << "Enter the length of array" << endl;
    cin >> N;
    int input_array[N];
    cout << "Enter array elements in increasing order" << endl;
    for(i=0;i<N;i++) 
    {
        cin >> input_array[i];
    }
    cout << "Enter the element to be searched" << endl;
    cin >> key; 
    low=0; 
    high=N-1; 
    while(low<=high) 
    {
        mid=(low+high)/2; 
        if(key<input_array[mid]) 
        {
            high=mid-1; // if yes, sub-array ends at index mid-1
        }
        else if(key>input_array[mid]) 
        {
            low=mid+1; 
        }
        else
        {
            
            break;
        }
    }
    if(key==input_array[mid]) 
    {
        cout << "key found " << mid << endl;
    }
    else 
    {
        cout << "key is not found" << endl;
    }
    return 0;
}
