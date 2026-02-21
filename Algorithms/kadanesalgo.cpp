#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[5]={2,4,-1,7,8};
    int maxsum=arr[0];
    int currentsum=0;

    for(int i=0;i<5;i++){
        currentsum+=arr[i];

        maxsum=max(currentsum,maxsum);

        if(currentsum<0){
            currentsum=0;
        }
        
    }
    cout<<"maxsum of a given array is ="<<maxsum<<endl;
    return 0;
}