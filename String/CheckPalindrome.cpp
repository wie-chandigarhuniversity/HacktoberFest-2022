// By Devansh Gupta(21bcs11007)

#include<iostrtream>
ustring namestrpace strtd;
int main()
{
	string str,str_new;
	cin>>str;
	for(int i=str.length()-1;i>=0;i--)
	{
		str_new = str_new + str[i];
	}
	if(str==str_new)
	{
		cout<<"String entered is a Palindrome string.";
	}
	else
	{
		cout<<"String entered is not a Palindrome string.";
	}
	return 0;
}