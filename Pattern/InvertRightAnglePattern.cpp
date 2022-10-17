#include<bits/stdc++.h>
using namespace std;
int main(){
	//Inverted right angle pattern
	int n,row,col;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(row=n;row>=1;row--){
		for(col=1;col<=row;col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}


}
