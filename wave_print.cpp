// Given a 2D Array of size M*N, we need to print the elements in a wave pattern i.e. frist from top-to-bottom and then from bottom-to-top and so on

#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    int j=0;
    while(j<mCols)
    {
        if(j%2==0)   // If the jth column is even, we'll print the elements from top-to-bottom
        {
           for(int i=0;i<nRows;i++)
           {
               cout<<input[i][j]<<" ";
           }
        }
        else    // Otherwise if the jth column is odd, we'll print the elements from bottom-to-top
        {
            for(int i=nRows-1;i>=0;i--)
            {
                cout<<input[i][j]<<" ";
            }
        }
        j++;
    }
}

int main()
{
	int t;
    cout<<"Enter the number of test cases to run : ";
	cin >> t;
	while (t--)
	{
		int row, col;
        cout<<"Enter the size of the row and the column : ";
		cin >> row >> col;
		int **input = new int *[row];
        cout<<"Enter the elements/values corresponding to the row and the column : ";
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}