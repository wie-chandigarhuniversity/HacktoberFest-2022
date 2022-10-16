//Getting user input in 2D Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
	int ar[4] [5];
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			printf("ar[%d] [%d] = ",i,j);
			cin>>ar[i][j];

		}
	}
    cout<<"Your 2D Array is= "<<endl;
	for(int i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d ",ar[i][j]);
		}
		cout<<endl;
	}
}
