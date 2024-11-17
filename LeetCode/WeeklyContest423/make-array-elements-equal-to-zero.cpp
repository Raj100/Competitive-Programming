// https://leetcode.com/problems/make-array-elements-equal-to-zero/description/

#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
#include <string>
#include <limits.h>
#include <time.h>
#include <bitset>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <functional>
#include <iterator>
#include <complex>
using namespace std;

typedef long long ll;
#define MOD 1000000007
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<char, int> mci;
typedef map<char, ll> mcl;
#define fast_io              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define pb push_back

class Solution {
public:
bool traverseleft(vector<int> nums, int curr,int n,int left){
    
    while(curr>=0 && curr<n){
        // cout<<curr<<" ";
        if(left==1 && nums[curr]>0){
            nums[curr]--;
            curr++;
            left=0;
        }
        else if(left==0 && nums[curr]>0){
            nums[curr]--;
            curr--;
            left=1;
        }
        else if(left==1){
            curr--;
        }
        else{
            curr++;
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            // cout<<"false"<<" ";
            return false;
        }
        // cout<<nums[i]<<" ";
    }
    // cout<<"true"<<" "<<endl;
    return true;
}
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(traverseleft(nums,i,n,1)){
                    ans+=1;
                }
                if(traverseleft(nums,i,n,0)){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};

int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        Solution s;
        cout<<s.countValidSelections(nums)<<endl;
    }
    return 0;
}