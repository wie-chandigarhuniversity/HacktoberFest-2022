//Calculate Average of Array
#include<bits/stdc++.h>
using namespace std;
int main(){

	int a[100],sum=0,n;
	cout<<"How many element: ";
	cin>>n;
	cout<<"Enter numbers: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<"Average is : "<<(float)sum/n<<endl;


}
