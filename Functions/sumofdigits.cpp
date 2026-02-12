//145 = 10

#include<iostream>
using namespace std;

int sumofdigits(int n)
{
    int sum = 0;
    while(n>0){
        int lastdig = n%10;
        n=n/10;
        sum =sum+lastdig;

    }
    return sum;
}

int main()
{
cout<<"sum of digits = "<<sumofdigits(145)<<endl; return 0;
}