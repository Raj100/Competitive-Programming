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
#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> solve(int N, int K, const vector<tuple<int, int, int>>& triplets) {
    vector<int> A(N, 1);
    set<int> indices_to_modify;

    for (const auto& [Li, Ri, mi] : triplets) {
        if (mi == 1) {
            for (int i = Li - 1; i < Ri; ++i) {
                indices_to_modify.insert(i);
            }
        }
    }

    for (int i : indices_to_modify) {
        A[i] = 2;
    }

    return A;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<tuple<int, int, int>> triplets;
        for (int i = 0; i < K; ++i) {
            int Li, Ri, mi;
            cin >> Li >> Ri >> mi;
            triplets.push_back(make_tuple(Li, Ri, mi));
        }

        vector<int> result = solve(N, K, triplets);

        if (any_of(result.begin(), result.end(), [](int x) { return x > 1; })) {
            for (int x : result) {
                cout << x << " ";
            }
        } else {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}