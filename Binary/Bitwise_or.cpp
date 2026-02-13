//0 | 0 = 0
//0 | 1 = 1
//1 | 0 = 1     
//1 | 1 = 1

#include <iostream>
using namespace std;
int main()
{
    int a=3;
    int b=4;

    int result = a | b; // Bitwise OR operation

    cout<<"The result of "<<a<<" | "<<b<<" is: "<<result<<endl; 
    return 0;
}