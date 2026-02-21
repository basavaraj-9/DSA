//kadens algorithm problem

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={-2,1,-3,4,-1,2,1,-5,4};
    int max_sum=vec[0];
    int current_sum=0;

    for(int i=0;i<vec.size();i++){
        current_sum+=vec[i];
        max_sum=max(max_sum,current_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<current_sum<<" "<<max_sum<<endl;
    return 0;
}