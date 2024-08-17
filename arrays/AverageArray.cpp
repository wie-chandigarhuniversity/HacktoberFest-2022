#include <iostream>
#include <vector>
#include <numeric> // for accumulate
#include <limits>  // for numeric_limits

using namespace std;

float calculateAverage(const vector<int>& numbers) {
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    return static_cast<float>(sum) / numbers.size();
}

int main() {
    int n;
    cout << "How many elements: ";
    cin >> n;

    // Error handling for invalid input
    if (n <= 0) {
        cout << "Number of elements must be positive!" << endl;
        return 1;
    }

    vector<int> a(n);
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        while (!(cin >> a[i])) {
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the invalid input
            cout << "Invalid input. Please enter an integer: ";
        }
    }

    float average = calculateAverage(a);
    cout << "Average is: " << average << endl;

    return 0;
}
