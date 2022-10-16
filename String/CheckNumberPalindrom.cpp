#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
	int a,temp;
	cout<<"enter a: ";
	cin>>a;
	
	int n=a;
	int res = a%10;
	
	while(true){
		a = a/10;
		if(a==0){
			break;
		}
		temp = a%10;
		res = (res*10)+temp;
	}
	
	if(res==n){
		cout<<"Number is palindrom number";
	}
	else{
		cout<<res<<endl;
		cout<<"Number is not a palindrom number";
	}

return 0;
}
