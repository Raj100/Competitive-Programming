#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) ((int)x.size())

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
#define f(i, j, n) for (int i = j; i < n; i++)
#define SORT(x) sort(x.begin(), x.end())
#define RSORT(x) sort(x.rbegin(), x.rend())
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(x.begin(), x.end(), 0LL)

set<int> recursive_sub(int a, int k)
{
    k=abs(k);
    int n=a;
    set<int> s;
    if(k==0){
        s.insert(a);
    }

    while (1)
    {
        n = n - k;
        if (n < 0)
        {
            if (s.count(abs(n)) == 0)
            {
                n=abs(n);
                s.insert(n);
            }
            else
            {
                break;
            }
        }
    }
    return s;
}

int main()
{
    int jk;
    cin >> jk;
    while (jk--)
    {
        int n, k;
        cin >> n >> k;
        int s[n];
        int t[n];
        FOR(i, n)
        {
            cin >> s[i];
        }
        FOR(i, n)
        {
            cin >> t[i];
        }
        map<set<int>, int> mp;
        FOR(i, n)
        {
            // cout<<"i="<<i<<endl;
            mp[recursive_sub(s[i], k)] += 1;
            mp[recursive_sub(t[i], k)] -= 1;
        }
        int flag=1;
        for (const auto &pair : mp)
        {
            if (pair.second != 0)
            {
                cout << "NO" << "\n";
                flag=0;
                break;
            }
        }
        if(flag){
        cout << "YES" << "\n";
        }
    }
    return 0;
}
