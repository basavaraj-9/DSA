#include <iostream>
using namespace std;
int maxof2(int a,int b)
{
    if(a<b){
        return b;
    }
    else
    {
        return a;
    }
}

int main(){
    cout<<"max ="<<maxof2(5,4)<<endl;
}