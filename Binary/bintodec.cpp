#include <iostream>
using namespace std;


int BintoDec(int n){
    int ans =0;
    int pow =1;

    while(n>0){
        int rem = n%10;
        n/=10;

        ans+=rem*pow;
        pow=pow*2;
        
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a binary number: "; 
    cin>>n; 
    cout<<"Decimal of "<<n<<" is: "<<BintoDec(n)<<endl; 
    return 0;
}