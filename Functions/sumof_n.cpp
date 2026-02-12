#include <iostream>
using namespace std;

int sumof_n(int n)
{
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=i;
    }
    return sum;
}

int main()
{
    int n=6;
    cout<<"sum of n = "<<sumof_n(n)<<endl;
    return 0;
}