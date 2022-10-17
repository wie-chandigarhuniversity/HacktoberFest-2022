/*
_________________________________________________________________________
-------------------------------------------------------------------------
```````````````````Linear Search Algorithm`````````````````````
In this program we are going to find index of element present in given array
-> length parameter is required because program will show error if we try to find length of array(parameter) inside function 
-------------------------------------------------------------------------
`````````````````````````````````````````````````````````````````````````
---->>> c program created 
---->>>by Suraj Kiran Airi(507-D)(22bcs11173)
________________________________________________________________________
________________________________________________________________________
*/


#include<stdio.h>

int linear_search(int arr[], int len, int value);

int main(){
    int arr[] = {1,2,34,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int index = linear_search(arr,len, 4);

    printf("\nvalue '%d' is at '%d' index in the array.", 4,index);
    printf("\n");
    return 0; 
}

// we had asked for length as parameter because other wise program might give error if you try to find length in this function 
// in this algorithm we iterate through all elements linearly until we find our element
int linear_search(int arr[],int len, int value){

    for( int i = 0; i < len; i++){
        if(arr[i] == value)
            return i;
    }
    return -1;
}