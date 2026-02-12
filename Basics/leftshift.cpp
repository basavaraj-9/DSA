#include <iostream>
using namespace std;
int main()
{

    cout<<(10<<2)<<endl;//10*(2^2) = 10*4 = 40
    cout<<(10<<3)<<endl;//10*(2^3) = 10*8 = 80
    cout<<(20>>1)<<endl;//10/(2^1) = 10/2 = 5
    cout<<(20>>3)<<endl;//10/(2^3) = 10/8 = 1
    return 0;
}