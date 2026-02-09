#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0) // Check if the number is odd
        {
            sum += i; // Add odd number to sum
        }
    }
    cout<<"Sum of first n odd numbers is: "<<sum<<endl;
}