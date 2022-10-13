#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,i,ar[200],j,temp;
    cout<<"Enter the size: ";
    cin>>number;
    cout<<"Enter the array: ";
	for(i=0; i<number; i++){
    	cin>>ar[i];
    }
        
    for(i=0; i<(number-1); i++){
        for(j=0; j<(number-i-1); j++){
            if(ar[j]>ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Order : ";
    for(i=0; i<number; i++){
    	cout<<ar[i]<<" ";
    }
}