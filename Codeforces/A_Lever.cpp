#include<bits/stdc++.h>
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
#define SORT(x) sort(x.begin(), x.end())
#define RSORT(x) sort(x.rbegin(), x.rend())
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(x.begin(), x.end(), 0LL)


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; 
        int a[n],b[n];
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++){
            cin>>b[i];
        }
        int ans=0;
        while(1){
        int i=0;
        int flag=1;
        for ( i = 0; i < n; i++){
            if(a[i]>b[i]){
                // cout<<"a--"<<a[i]<<"="<<a[i]-1<<"\n";
                a[i]--;
                flag=0;
                break;
            }
        }
        for ( i = 0; i < n; i++){
            if(a[i]<b[i]){
                // cout<<"a++"<<a[i]<<"="<<a[i]+1<<"\n";
                a[i]++;
                break;
            }
        }
        ans+=1;
        if(flag){
            break;
        }
        }
        cout << ans << "\n";
    }
    return 0;
}
