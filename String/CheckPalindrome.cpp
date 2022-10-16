#include<bits/stdc++.h>
using namespace std;
int main(){

	string s,sr;
	cin>>s;

	for(int i=s.length()-1;i>=0;i--){
		sr = sr + s[i];
	}
	if(s==sr){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not a Palindrome";
	}


}
