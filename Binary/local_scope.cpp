//it is the variable which is declared inside the function and can be used only inside the function
// it can not be accessed outside the funtion

#include <iostream>
using namespace std;

int main()
{
    int a =10;

    if(a>5)
    {
        int b =20;
        cout<<"The value of b is : "<<b<<endl;
    }

    //cout<<"The value of b is : "<<b<<endl; this shows error as b is declared inside the if block and can not be accessed outside the block
    return 0;
}