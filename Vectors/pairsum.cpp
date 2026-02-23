#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector<int> &nums, int s){
    vector<int> ans;
    for (int i=0;i<nums.size();i++){
        for (int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==s)
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,3,7,8,11,15};
    int s=15;
    vector<int> ans = pairSum(nums,s);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}