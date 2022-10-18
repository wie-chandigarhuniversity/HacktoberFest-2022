#include<stdio.h>
int main()
{
    int number,i,ar[200],j,temp;
    printf("Enter the size: ");
    scanf("%d",&number);
    printf("Enter the array: ");
	for(i=0; i<number; i++){
    	scanf("%d",&ar[i]);
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

    printf("Sorted Order : ");
    for(i=0; i<number; i++){
        printf("%d ",ar[i]);
    	
    }
}