#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 7;
    int arr[7]={1,2,3,7,-8,9,4};

    for (int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}