//0 & 0 = 0
//0 & 1 = 0
//1 & 0 = 0     
//1 & 1 = 1

#include <iostream>
using namespace std;    
int main() {
    int a = 5; // In binary: 0101
    int b = 3; // In binary: 0011

    int result = a & b; // Bitwise AND operation

    cout << "The result of " << a << " & " << b << " is: " << result << endl; // Output will be 1 (In binary: 0001)

    return 0;
}