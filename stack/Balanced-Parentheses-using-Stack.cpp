#include<iostream>
#include<stack>
using namespace std;

// Function to check whether two characters are opening 
// and closing of same type. 
bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

int areBalancedParantheses(string exp)
{
    stack<char> stk;
    for (int i = 0; i < exp.length(); i++)
    {
        /* code */
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        stk.push(exp[i]);
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(stk.empty() || !ArePair(stk.top(), exp[i]))
            return 0;
            else
            stk.pop();
        }
    }
    return stk.empty() ? true:false;
}

int main(){

    char* exp1 = "{([a+b] * [c-d])/2}";

    if(areBalancedParantheses(exp1))
    cout<<"Balanced";
    else
    cout<<"Not Balanced";
    
    return 0;
}
