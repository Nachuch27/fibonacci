#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Measure start time
    auto start = high_resolution_clock::now();

    // Calculate factorial
    long long result = factorial(num);

    // Measure end time
    auto stop = high_resolution_clock::now();

    // Calculate runtime
    auto duration = duration_cast<microseconds>(stop - start);

    // Output results
    cout << "Factorial of " << num << " is: " << result << endl;
    cout << "Execution Time: " << duration.count() << " microseconds" << endl;

    return 0;
}