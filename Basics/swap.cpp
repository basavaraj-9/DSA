#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a;
    cin>>b;

    int temp = a;
    a = b;
    b = temp;

    cout<<"Values after swapping:"<<endl;
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
    return 0;
}