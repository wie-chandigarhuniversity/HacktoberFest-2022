#include<iostream>
using namespace std;

int findMax(int arr[], int n){
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void countSort(int A[], int n){
    int i, j, max, *C;

    max = findMax(A,n);
    C = new int[max+1];
    for (int i = 0; i < max+1; i++){
        C[i] = 0;
    }

    for (int i = 0; i < n; i++){
        C[A[i]]++;
    }

    i=0,j=0;
    while(j < max+1){
        if(C[j] > 0){
            A[i++] = j;
            C[j]--;
        }
        else{
            j++;
        }
    }
    
}

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    cout<<"Sorting using Count Sort: ";
    countSort(arr,n);

    display(arr, n);

    return 0;
}
