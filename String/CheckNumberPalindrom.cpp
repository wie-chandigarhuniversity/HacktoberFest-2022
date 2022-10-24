// Checking pallindrome number by Devansh Gupta(21bcs11007)

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a,temp;
	cout<<"Enter a number: ";
	cin>>a;
	int n=a;
	int r = a%10;
	while(true)
	{
		a = a/10;
		if(a==0){
			break;
		}
		temp = a%10;
		r = (r*10)+temp;
	}
	if(r==n)
	{
		cout<<"Number is a palindrom number.";
	}
	else
	{
		cout<<r<<endl;
		cout<<"Number is not a palindrom number.";
	}
return 0;
}