//0 ^ 0 =0
//0 ^ 1 =1      
//1 ^ 0 =1
//1 ^ 1 =0

#include <iostream>
using namespace std;
int main()
{
    int a =8;
    int b= 6;

    int result = a^b;

    cout<<"The result of "<<a<<" ^ "<<b<<" is: "<<result<<endl;
    return 0;       
}