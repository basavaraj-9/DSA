#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false; // Power of 2 must be positive
    }
    return (n & (n - 1)) == 0; // Check if n has only one bit set
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << num << " is " << (isPowerOfTwo(num) ? "" : "not ") << "a power of 2." << endl;
    return 0;
}