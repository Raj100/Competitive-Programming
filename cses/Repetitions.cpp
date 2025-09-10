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
#define fm(mp) for (const auto &pair : mp)


void solve()
{
    int n;
    cin >> n;
    int a[n];
    FOR(i, n)
    {
        cin >> a[i];
    }
    cout << "" << "\n";
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);   
    // Time: O(n)  Space: O(1)
    string t;
    cin >> t;
    ll n = t.length();
    ll maxS=0,count=1;
    char prev='\0';
    char curr='\0';
    for (int i=0;i<n;i++)
    {
        curr = t[i];
        if(curr==prev){
            count+=1;
        }
        else{
            count =1;
        }
        prev=curr;
        maxS=max(maxS,count);
    }
    cout<<maxS;
    return 0;
}
