#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int > > ans;
    void r(vector<int> nums,vector<int>& a) {
        if(nums.size()==0){
            ans.push_back(a);
            return;
        }
        int temp=nums[0];
        nums.erase(nums.begin());
        r(nums,a);
        a.push_back(temp);
        r(nums,a);
        a.pop_back();
    }

    vector<vector<int> > subsets(vector<int>& nums) {
        vector<int>a;
        r(nums,a);
        return ans;
    }
};
int main (){
    Solution obj;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    obj.subsets(nums);
    return 0;
}