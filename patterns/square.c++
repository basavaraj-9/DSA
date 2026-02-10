//1 2 3 
//1 2 3
//1 2 3

#include <iostream>
using namespace std;    
int main()
{
    int n;
    cout<<"Enter the n:"<<flush;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}