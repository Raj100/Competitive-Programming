#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) ((int)x.size())
#define trav(a, x) for (auto& a : x)

typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;

#define FOR(i, n) for (int i = 0; i < n; i++)
#define FOR1(i, n) for (int i = 1; i <= n; i++)
#define SORT(x) sort(x.begin(), x.end())
#define RSORT(x) sort(x.rbegin(), x.rend())
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(x.begin(), x.end(), 0LL)

template <typename T>
void printVector(const vector<T>& vec) {
    trav(elem, vec) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string ans = "";
        FOR(i, n) {
            if (i % 5 == 0)
                ans += 'a';
            else if (i % 5 == 1)
                ans += 'e';
            else if (i % 5 == 2)
                ans += 'i';
            else if (i % 5 == 3)
                ans += 'o';
            else if (i % 5 == 4)
                ans += 'u';
        }
        cout << ans << endl;
    }
    return 0;
}
