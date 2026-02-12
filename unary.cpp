#include <iostream>
using namespace std;
int main()
{
    int x=10;

    cout<<"x++ = "<<x++<<endl; //post increment print output 10 and then increment x to 11
    cout<<"++x = "<<++x<<endl; //pre increment increment x to 12 and then print output 12
    cout<<"x-- = "<<x--<<endl; //post decrement print output 12 and then decrement x to 11
    cout<<"--x = "<<--x<<endl; //pre decrement decrement x to 10 and then print output 10
    return 0;
}

