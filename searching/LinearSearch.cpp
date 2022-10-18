#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {5,3,56,34,8798,2,1,23,45,100};
	int item = 45;
	for(int i=0;i<10;i++){
		if(a[i]==item){
			cout<<"Found at Index: "<<i;
            return 0;
		}

	}
	cout<<"Not found";


}
