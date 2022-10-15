#include<bits/stdc++.h>
using namespace std;
int main(){

	int a[100],sum=0,n,max,min;
	cout<<"How many element: ";
	cin>>n;
	cout<<"Enter numbers: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	max = a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
	}

	min = a[0];
	for(int i=1;i<n;i++){
		if(min>a[i]){
			min = a[i];
		}
	}

	cout<<"Maximum number is: "<<max<<endl;
	cout<<"Minumum number is: "<<min;



}
