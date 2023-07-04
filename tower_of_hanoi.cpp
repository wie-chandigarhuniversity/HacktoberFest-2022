#include <bits/stdc++.h>

using namespace std;

long long steps = 0;
void TOH(int n, int a, int b, int c)
{
    if (n == 1)
    {
        steps++;
        cout << "move disk " << n << " from rod " << a << " to rod " << b << endl;
        return;
    }
    else// N=2;
    {
        TOH(n - 1, a, c, b);
        steps++;//STEP=1,
       cout << "move disk " << n << " from rod " << a << " to rod " << b << endl;// DISK 1-ROD 1 TO ROD 2
        TOH(n - 1, c, b, a);
       // cout << "move disk " << n << " from rod " << a << " to rod " << b << endl;
    }
}

// } Driver Code Ends
class Solution
{
public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux)
    {
        // Your code here
        TOH(N, from, to, aux);
        return steps;
    }
};

// { Driver Code Starts.

int main()
{

    int T;
    cin >> T; // testcases
    while (T--)
    {

        int N;
        cin >> N; // taking input N

        // calling toh() function
        Solution ob;

        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
