// Bubble Sort
#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int count=1;
    while(count<n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        count++;
    }
    for (int i=0;i<n;i++)
    {   
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int len;
    cout<<"enter size of array";
    cin>>len;
    int arr[len];
    cout<<"enter array elements"<<endl;
    for (int i=0;i<len;i++)
    {   
        cin>>arr[i];
    }
    bubble_sort(arr,len);
}
