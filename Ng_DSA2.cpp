#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[count];  
            arr[count] = temp;
            count++;
        }
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
