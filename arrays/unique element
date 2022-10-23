// CPP program to find unique element where
// every element appears k times except one
#include <bits/stdc++.h>
using namespace std;

int findUnique(unsigned int a[], int n, int k)
{
	// Create a count array to store count of
	// numbers that have a particular bit set.
	// count[i] stores count of array elements
	// with i-th bit set.
	int INT_SIZE = 8 * sizeof(unsigned int);
	int count[INT_SIZE];
	memset(count, 0, sizeof(count));

	// AND(bitwise) each element of the array
	// with each set digit (one at a time)
	// to get the count of set bits at each
	// position
	for (int i = 0; i < INT_SIZE; i++)
		for (int j = 0; j < n; j++)
			if ((a[j] & (1 << i)) != 0)
				count[i] += 1;

	// Now consider all bits whose count is
	// not multiple of k to form the required
	// number.
	unsigned res = 0;
	for (int i = 0; i < INT_SIZE; i++)
		res += (count[i] % k) * (1 << i);

	// Before returning the res we need
	// to check the occurrence of that
	// unique element and divide it
	res = res / (n % k);
	return res;
}

// Driver Code
int main()
{
	unsigned int a[] = { 6, 2, 5, 2, 2, 6, 6 };
	int n = sizeof(a) / sizeof(a[0]);
	int k = 3;
	cout << findUnique(a, n, k);
	return 0;
}
