#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s; 
        if(x == 1 || x == n){
            cout << 1 << endl;
            continue;
        }
        int left = 0, right = n + 1;// 1 based indexed
        for(int i = x - 2; i >= 0; i--){
            if(s[i] == '#'){
                left = i + 1;
                break;
            }
        }
        for(int i = x; i < n; i++){
            if(s[i] == '#'){
                right = i + 1;
                break;
            }
        }
        cout << max(min(x,n-right+2),min(left+1,n-(x+1)+2)) << endl;
    }
    return 0;
}
