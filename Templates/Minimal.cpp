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

int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vll a;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.pb(x);
        }
        sort(a.begin(), a.end());
        vll b;
        ll sum = 0;
        ll sum1 = 0;
        for (ll i = 0; i < n; i++)
        {
            sum1 += a[i];
            sum = sum1;
            ll count = 0;
            for (ll j = i-k; j >= 0;)
            {
                sum -= a[j];
                j -= (k+1);
            }
            cout <<sum << " ";
        }
        cout << endl;
    }
    return 0;
}