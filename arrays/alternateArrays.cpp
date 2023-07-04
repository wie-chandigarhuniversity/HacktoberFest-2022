#include <iostream>
using namespace std;
void Array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void alternateArray(int *arr, int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i == (n - 1))
        {
            continue;
        }
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    cout << "STARTING THE ALTERNATE ARRAYS " << endl;
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    Array(arr, size);
    alternateArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    return 0;
}