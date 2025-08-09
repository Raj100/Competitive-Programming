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

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vll vector<ll>

int main() {
    fast_io;
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vll a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        vll prefix(n + 1, 0);
        for (ll i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + a[i];
        }

        vll result(n);
        for (ll i = 0; i < n; i++) {
            ll sum = prefix[i + 1];
            ll j = i - k;         
            while (j >= 0) {
                sum -= a[j];
                j -= (k + 1);     
            }
            result[i] = sum;
        }

        for (ll i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
