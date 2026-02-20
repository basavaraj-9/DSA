//single number nums

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int ans = 0;
    vector<int> nums = {4, 1, 2, 1, 2};
    for(int i: nums){
        ans = ans^i;
    }
    cout<<ans<<endl;
    return 0;
}