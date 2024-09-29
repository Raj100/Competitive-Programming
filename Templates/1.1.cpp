

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

template <typename T>
class fenwick_tree {
public:
    vector<T> fenw;
    int n;

    fenwick_tree(int _n) : n(_n) {
        fenw.resize(n);
    }

    fenwick_tree() {

    }

    void initialize(int _n) {
        fenw.assign(_n, 0);
        n = _n;
    }

    void update(int x, T v) {
        while (x < n) {
            fenw[x] += v;
            x |= (x + 1);
            //x += (x & (-x));
        }
    }

    T query(int x) {
        T v{};
        while (x >= 0) {
            v += fenw[x];
            x = (x & (x + 1)) - 1;
        }
        return v;
    }

    T query_full(int a, int b) {		// range query
        if ((a == 0) || (b == 0) || (a > b)) return 0;
        return query(b) - ((a <= 1) ? 0 : query(a - 1));
    }
};

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size(), i, j, k, m = 1;
        map<int, int> id;
        for (auto p : nums) id[p] = 0;
        for (auto p : id) id[p.first] = m++;
        m += 10;

        VI a, b;

        fenwick_tree<LL> ft1(m), ft2(m);
        FOR(i, n) {
            if (i == 0) k = 1;
            else if (i == 1) k = 2;
            else {
                LL x = id[nums[i]];
                LL s1 = ft1.query_full(x + 1, m - 1); 
                LL s2 = ft2.query_full(x + 1, m - 1);

                if (s1 > s2) k = 1;
                else if (s1 < s2) k = 2;
                else {
                    if (a.size() <= b.size()) k = 1;
                    else k = 2;
                }
            }

            if (k == 1) {
                a.push_back(nums[i]);
                ft1.update(id[nums[i]], 1);
            }
            else {
                b.push_back(nums[i]);
                ft2.update(id[nums[i]], 1);
            }
        }

        for (auto p : b) a.push_back(p);
        return a;
    }
};
