#include <iostream>
using namespace std;
bool primeornot(int n)
{
    if (n<=1){
        return false;
    }
    for (int i=2;i<n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n=11;
    if (primeornot(n)){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not prime number"<<endl;
    }
    return 0;
}