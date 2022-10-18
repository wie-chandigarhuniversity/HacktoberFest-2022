/*
_________________________________________________________________________
-------------------------------------------------------------------------
```````````````````Insertion Sort Algorithm`````````````````````
In this program we are sorting elements of array using insertion algorithm
-> length parameter is required because program will show error if we try to find length of array(parameter) inside function 
-------------------------------------------------------------------------
`````````````````````````````````````````````````````````````````````````
---->>> c program created 
---->>>by Suraj Kiran Airi(507-D)(22bcs11173)
________________________________________________________________________
________________________________________________________________________
*/


#include<stdio.h>

void insertion_sort(int arr[], int len);
void print_array(int arr[], int len);

int main(){
    int arr[] = {5,1,8,3,6,8,2,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, len);
    insertion_sort(arr, len);
    print_array(arr, len);
}

// logic for insertion sort
void insertion_sort(int arr[], int len){
    int i, j, key;

    // iterates to all elements of array
    for(i = 0; i < len; i++){
        j = i - 1;
        key = arr[i];
        // loop till key is smaller value than previous numbers
        while (j >= 0 && arr[j] > key)
        {
           arr[j + 1] =  arr[j];
           j--;
        }
        // adding key
        arr[j+1] = key;
    }
}

// printing array elements 
void print_array(int arr[], int len){
    printf("\n");
    for(int i = 0; i<len; i++){
        printf("'%d' ",arr[i]);
    }
}