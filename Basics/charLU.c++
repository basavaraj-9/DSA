//to find whether the given character is Lowercase or uppercase


#include<iostream>
using namespace std;    
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if(ch>='a' && ch<='z')
    {
        cout<<"the character is lowercase."<<endl;
    }
    else
    {
        cout<<"the character is uppercase."<<endl;
    }
    return 0;
}