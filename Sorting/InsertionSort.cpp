#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[] ={100,120,76,1,22,34};
	int i,val,blank,l;
	for(i=1;i<6;i++){
		val = a[i];
		blank = i;
		while(blank>0 && a[blank-1]>val){
			a[blank] = a[blank-1];
			blank--;
		}
		a[blank] = val;
	}
	printf("Sorted Array------: \n");
	for(i=0;i<6;i++){
		printf("%d\n",a[i]);
	}

}
