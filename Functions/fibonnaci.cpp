#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=1){
    return 0;
    }
    
    int a=0,b=1,c;

    for(int i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    return c;
}

int main() { 
    int n=10; 
    cout<<"fibonnaci of "<<n<<" is "<<fibonacci(n)<<endl; 
    return 0; 
}