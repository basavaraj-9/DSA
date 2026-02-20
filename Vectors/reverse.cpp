#include<iostream>
#include<vector>
using namespace std;

int reverse(vector<int>v,int size)
{
    int start=0,end=size-1;
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return 0;
}

int main()
{
    vector<int>v={4,2,7,8,1,2,5};
    int size=v.size();
    // cout<<"Original array: ";
    // for(int i=0;i<size;i++){
    //     cout<<v[i]<<" ";
    // }   
    reverse(v,size);
    cout<<endl<<"Reversed array: ";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
        return 0;
}