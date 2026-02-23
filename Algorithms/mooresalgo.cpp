//{1,2,2,1,1,1}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int vector[] = {1,2,2,1,1,1};

    int freq=0,ans=0;
    for (int i=0;i<6;i++){
        if(freq==0)
            ans=vector[i];
        if(ans==vector[i])
            freq++;
        else
            freq--; 
    }
    cout<<ans;
    return 0;
}