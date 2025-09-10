#include <bits/stdc++.h>
using namespace std;

unordered_map<int,string> mp;
int Root;

vector<int> getPath(int x){
    vector<int> p; p.push_back(x);
    string s = mp[x];
    while(!s.empty()){
        s.pop_back();
        for(auto &kv : mp){
            if(kv.second == s){
                p.push_back(kv.first);
                break;
            }
        }
        if(s.empty()) p.push_back(Root);
    }
    reverse(p.begin(), p.end());
    return p;
}
void shortestPath(int N, int RootVal, string pos[], int val[], int A, int B) {
    Root = RootVal;
    mp[Root] = "";
    for(int i=0;i<N-1;i++) mp[val[i]] = pos[i];

    vector<int> p1 = getPath(A), p2 = getPath(B);
    int i=0; while(i<p1.size() && i<p2.size() && p1[i]==p2[i]) i++;

    vector<int> ans;
    for(int j=p1.size()-1;j>=i;j--) ans.push_back(p1[j]);
    for(int j=i-1;j<p2.size();j++) ans.push_back(p2[j]);

    for(int k=0;k<ans.size();k++) cout<<ans[k]<<(k+1==ans.size()?"\n":" ");
}

int main(){
    int N,Root,A,B;cin>>N>>Root;
    string pos[N-1];int val[N-1];
    for(int i=0;i<N-1;i++) cin>>pos[i]>>val[i];
    cin>>A>>B;
    shortestPath(N,Root,pos,val,A,B);
}
