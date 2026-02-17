#include<iostream>
using namespace std;
int main()
{
    int n;
    double num;
    bool d;
    char ch;
    string name;

    cin>>n;
    cin>>num;
    cin>>d;
    cin>>ch;
    cin.ignore();
    getline(cin,name);
    cout<<"Integer value is = "<<n<<endl;
    cout<<"Double value is = "<<num<<endl;
    cout<<"Boolean value is = "<<d<<endl;
    cout<<"Character value is = "<<ch<<endl;
    cout<<"String value is = "<<name<<endl;

    return 0;
}