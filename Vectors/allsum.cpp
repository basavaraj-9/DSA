#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=6;
    int arr[6]={2,5,-2,1,-9,4};
    int maxsum= arr[0];

    for(int st=0;st<n;st++){
        int currentsum=0;
        for(int end=st;end<n;end++){
            currentsum+=arr[end];
            maxsum=max(currentsum,maxsum);
        }
    }
    cout<<"maxsum of the array is = "<<maxsum<<endl;
    return 0;
}