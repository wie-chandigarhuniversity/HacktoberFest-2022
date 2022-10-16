#include<bits/stdc++.h>
using namespace std;
int main(){

	int n,row,col;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}


}
