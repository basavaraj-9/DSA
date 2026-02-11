#include <iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int result = sum(5, 3);
    cout << "The sum of 5 and 3 is: " << result << endl;
    return 0;
}