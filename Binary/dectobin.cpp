#include <iostream>
using namespace std;

int DectoBin(int n)
{

    int ans =0,pow=1;

    while(n>0){
        int rem = n%2;
        n/=2;
        ans+=rem*pow;
        pow*=10;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Binary of "<<n<<" is: "<<DectoBin(n)<<endl;

    return 0;   
}