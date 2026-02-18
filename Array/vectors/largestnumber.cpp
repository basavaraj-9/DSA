#include<iostream>
using namespace std;
int main()
{
    int nums[6]={5,15,22,1,-5,24};
    int size=6;
    int largest=nums[0];
    int largestIndex=0;
    
    for(int i=1;i<size;i++){
        if(nums[i]>largest)//max(largest,nums[i])
        {
            largest=nums[i];
            largestIndex=i;
        }
    }
    cout<<"Largest number is: "<<largest<<endl;
    cout<<"Largest number index is: "<<largestIndex<<endl;
    return 0;
}