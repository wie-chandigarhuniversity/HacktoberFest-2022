#include <iostream>
using namespace std;
// solving the question by XOR operator
int findDuplicate(int *arr, int n)
{
    int ans = 0;
    // inside the array applying XOR
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    // applying XOR on array and 1 to N-1 numbers
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    cout << "LETS FIND THE DUPLICATE ELEMENT USING OPTIMAL APPROACH" << endl;
    int arr[6] = {1, 2, 3, 4, 5, 4};
    cout << findDuplicate(arr, 6);
    return 0;
}