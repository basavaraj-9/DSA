#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    bool isPrime = true; // Assume n is prime until proven otherwise
    if(n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for(int i=2; i*i<=n; i++)
        {
            if(n%i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime)
    {
        cout<<"The number is prime."<<endl;
    }
    else
    {
        cout<<"The number is not prime."<<endl;
    }
    return 0;
}