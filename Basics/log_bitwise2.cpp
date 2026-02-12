#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=5;
    int c=20;
    cout<<(a<b&&a++<c)<<endl;
    cout<<a<<endl;
    cout<<(a<b&a++<c)<<endl;
    cout<<a<<endl;
    return 0;
}