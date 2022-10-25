// C++ program to print largest contiguous array sum
#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int n)
{
	int overall_subsegment_sum = INT_MIN , subsegment_sum = 0;

	for (int i = 0; i < n; i++) {
		subsegment_sum = subsegment_sum + a[i]; // first adding all contiguous values of array
		if (overall_subsegment_sum < subsegment_sum)
			overall_subsegment_sum = subsegment_sum; // storing the local maximum value of subarray

		if (subsegment_sum < 0)
			subsegment_sum = 0;
	}
	return overall_subsegment_sum; // returning the overall maximum of the sum
}

int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin>>arr[i];
    int max_sum = maxSubArraySum(a, n);
	cout << "Maximum sum of subarray" << max_sum;
	return 0;
}
