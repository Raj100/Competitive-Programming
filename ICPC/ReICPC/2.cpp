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

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<tuple<int, int, int>> constraints(K);
        for (int i = 0; i < K; ++i) {
            int L, R, m;
            cin >> L >> R >> m;
            constraints[i] = {L, R, m};
        }

        vector<int> A(N, 0); // Result array initialized to 0
        bool valid = true;

        // Fill the array based on constraints
        for (const auto& [L, R, m] : constraints) {
            int start_value = 1;

            // Ensure the subarray does not have the minimum `m`
            while (start_value == m) start_value++;
            if (start_value > N) {
                valid = false;
                break;
            }

            // Assign values in strictly increasing order
            for (int i = L - 1; i < R; ++i) {
                A[i] = start_value;
                start_value++;
                if (start_value > N + 1) { // If we exceed allowed numbers
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }

        // Fill any unfilled positions in the array
        int fill_value = 1;
        for (int i = 0; i < N; ++i) {
            if (A[i] == 0) {
                while (find(A.begin(), A.end(), fill_value) != A.end()) {
                    fill_value++;
                }
                A[i] = fill_value;
            }
        }

        // Validate all constraints
        for (const auto& [L, R, m] : constraints) {
            int subarray_min = *min_element(A.begin() + (L - 1), A.begin() + R);
            if (subarray_min == m) {
                valid = false;
                break;
            }
        }

        if (valid) {
            for (int i = 0; i < N; ++i) {
                cout << A[i] << " ";
            }
            cout << "\n";
        } else {
            cout << "-1\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}