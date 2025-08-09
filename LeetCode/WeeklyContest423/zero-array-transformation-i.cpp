// https://leetcode.com/problems/zero-array-transformation-i/description/

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
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n = nums.size();
        vector<int> diff(n + 1, 0);
        
        for(const auto& query : queries) {
            int l = query[0];
            int r = query[1];
            diff[l]++;
            diff[r + 1]--;
        }
        
        int operations = 0;
        for(int i = 0; i < n; i++) {
            operations += diff[i];
            if(operations < nums[i]) {
                return false;
            }
        }
        
        return true;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        int q;
        cin >> q;
        vector<vector<int>> queries(q, vector<int>(2));
        for(int i = 0; i < q; i++){
            cin >> queries[i][0] >> queries[i][1];
        }
        Solution s;
        cout << s.isZeroArray(nums, queries) << endl;
    }
    return 0;
}