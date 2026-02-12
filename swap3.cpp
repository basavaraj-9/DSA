#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a;
    cin>>b;

    a=(a+b)-(b=a);

    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;

    return 0;
}