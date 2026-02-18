#include<iostream>
using namespace std;
int main()
{
    int nums[6]={5,15,22,1,-5,24};
    int size=6;
    int smallest=nums[0];
    int smallestIndex=0;
    for(int i=1;i<size;i++){
        if(nums[i]<smallest)//min(smallest,nums[i])
        {
            smallest=nums[i];
            smallestIndex=i;
        }
    }
    cout<<"Smallest number is: "<<smallest<<endl;
    cout<<"Smallest number index is: "<<smallestIndex<<endl;
    return 0;
}