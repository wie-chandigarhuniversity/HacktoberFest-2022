#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

	int rows;
	int n = 1;
	cout << "Enter the number of the rows: " << endl;
	cin >> rows;
	for (int i = 0; i <= rows; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout<<setw(3) << n;
			n++;

		}
		cout << endl;
	}
}