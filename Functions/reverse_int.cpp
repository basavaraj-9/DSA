#include <iostream>
using namespace std;

int rev_int(int n)
{
    int rev = 0;
    while (n!=0){
        rev = rev*10+n%10;
        n/=10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number: " << rev_int(num) << endl;
    return 0;
}