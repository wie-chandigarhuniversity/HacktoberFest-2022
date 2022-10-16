#include <iostream>
using namespace std;
 
int main() {
    int a[] = {2, 4, 6, 8}; //integer array
    int len = sizeof(x) / sizeof(a[0]); //get array length
    int sum = 0; //initialize sum with 0
     
    for (int i = 0; i < len; i++) {
        sum += a[i]; //accumulate sum
    }
     
    cout << "Sum : " << sum << endl;
}
