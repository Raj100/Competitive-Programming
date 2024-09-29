

// COPY ALL MACROS BELOW

typedef long long LL;
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
#define SZ(x) ((int)x.size())
#define LEN(x) ((int)x.length())
#define ALL(x) begin(x), end(x)
#define RSZ resize
#define ASS assign
#define REV(x) reverse(x.begin(), x.end());
#define trav(a, x) for (auto& a : x)
typedef pair<LL, LL> PL;
typedef vector<LL> VL;
typedef vector<PL> VPL;
typedef vector<VL> VVL;
typedef vector<VVL> VVVL;
typedef vector<VVVL> VVVVL;
typedef vector<string> VS;
typedef pair<int, int> PI;
typedef vector<int> VI;
typedef vector<PI> VPI;
typedef vector<vector<int>> VVI;
typedef vector<vector<PI>> VVPI;
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define FOR(i, n) for (int i = 0; i < n; i++) 
#define FOR1(i, n) for (int i = 1; i <= n; i++) 
#define SORT(x) sort(x.begin(), x.end())
#define RSORT(x) sort(x.rbegin(), x.rend())
#define SUM(x) accumulate(x.begin(), x.end(), 0LL)

class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size(), i, j, ans = 0, ss;
        VVI s(n + 1, VI(m + 1, 0));
        FOR1(i, n) {
            ss = 0;
            FOR1(j, m) {
                ss += grid[i - 1][j - 1];
                s[i][j] = s[i - 1][j] + ss;
                if (s[i][j] <= k) ans++;
            }
        }
        return ans;
    }
};