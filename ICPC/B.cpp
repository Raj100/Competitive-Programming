#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<math.h>
#include<string>
#include<limits.h>
#include<time.h>
#include<bitset>
#include<list>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<functional>
#include<iterator>
#include<complex>
using namespace std;

typedef long long ll;
#define MOD 1000000007 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<char, int> mci;
typedef map<char, ll> mcl;
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back


int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){ 
        ll n,k;
        cin>>n>>k;
        vll a;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.pb(x);
        }
        sort(a.begin(),a.end());
        vll ans;
        vll b;
        
        for(ll i=0;i<n;i++){
            b.pb(a[i]);
            ll sum=0;
            ll count =0;
            for(ll j=i;j>=0;){
                sum+=b[j];
                count++;
                if(count-k==0){
                    j-=(k+1);
                    count=0;
                }
                else{
                    j--;
                }
            }
            ans.pb(sum);
        }
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}