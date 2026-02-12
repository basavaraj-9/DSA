#include <iostream>
using namespace std;
int minof2(int a , int b)
{
    if(a<b){
        return a;

    }
    else{
        return b;
    }
}


int main()
{
    int a=10;
    int b=5;
    cout<<minof2(a,b)<<endl;
    return 0;
}