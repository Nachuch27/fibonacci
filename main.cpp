#include <iostream> 
#include <chrono>

using namespace std; 
using namespace chrono;

// Function to generate a sequence (Example: Fibonacci Sequence)
void generateSequence(int n) {
    long long a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() { int n; 
    cout << "Enter the number of terms: "; cin >> n;

// Start measuring time
auto start = high_resolution_clock::now();

generateSequence(n);

// Stop measuring time
auto stop = high_resolution_clock::now();

// Calculate duration
auto duration = duration_cast<microseconds>(stop - start);

cout << "Execution time: " << duration.count() << " microseconds" << endl;

return 0;

}