//Print fibonacci series using array
#include<bits/stdc++.h>
using namespace std;
int main(){

	int a[100], n;
	cout<<"How many fibonacci number you want to enter:  ";
	cin>>n;
	a[0] = 0;
	a[1] = 1;
	for(int i=2;i<n;i++){
		a[i] = a[i-1] + a[i-2];

	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}



}
