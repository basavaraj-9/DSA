#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter an integer:";
    cin>>num;

    char ch = static_cast<char>(num);
    cout<<"The character corresponding to ASCII value "<<num<<" is "<<ch<<endl;
    return 0;
}