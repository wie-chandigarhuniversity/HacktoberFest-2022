#include<bits/stdc++.h>
using namespace std;
int main(){

	string s = "The quick brown fox jumps over the lazy dog";
	//using length() function
	cout<<"Length is = "<<s.length()<<endl;

	//using size() function
	cout<<"Length is = "<<s.size()<<endl;

	//without using any builtin function
	int i=0,length=0;
	while(s[i]!='\0'){
		i++;
		length++;
	}
	
	cout<<"Length is = "<<length<<endl;

}
