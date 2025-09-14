#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void rec(const string &s, int idx, string current) {
    if (idx == s.size()) {
        ans.push_back(current);
        return;
    }
    // Exclude current character
    rec(s, idx + 1, current);
    // Include current character
    rec(s, idx + 1, current + s[idx]);
}

void sub(string s = "AMMMNZ") {
    ans.clear();
    rec(s, 0, "");

    // cout << "All subsequences:\n";
    // for (auto &e : ans) cout << e << " ";
    // cout << "\n";

    int countAMZ = 0;
    for (auto &e : ans)
        if (e == "AMZ")
            countAMZ++;

    if (countAMZ > 0) {
        cout << countAMZ * 2 << "\n";
    } else {
        int c1 = 0, c2 = 0;
        for (auto &e : ans)
            if (e == "AM")
                c1++;
        for (auto &e : ans)
            if (e == "MZ")
                c2++;
        cout << max(c1, c2) << "\n";
    }
}

int main() {
    string a;
    cin>>a;
    sub(a);
    return 0;
}
