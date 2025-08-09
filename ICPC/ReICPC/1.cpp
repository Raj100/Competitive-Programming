#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        bool found = false;
        vector<int> result_indices;

        // Iterate over all subsets using bitmasking
        int total_subsets = (1 << N);
        for (int mask = 1; mask < total_subsets; ++mask) { // Exclude empty subset
            int subset_and = -1; // Start with all bits set
            vector<int> indices;

            for (int i = 0; i < N; ++i) {
                if (mask & (1 << i)) { // Check if the ith element is in the subset
                    indices.push_back(i + 1); // 1-based indexing
                    if (subset_and == -1)
                        subset_and = arr[i]; // Initialize AND with first element
                    else
                        subset_and &= arr[i];
                }
            }

            if (subset_and == K) {
                // Valid subset found
                found = true;
                result_indices = indices;
                break;
            }
        }

        if (found) {
            cout << "YES\n";
            cout << result_indices.size() << "\n";
            for (int idx : result_indices) {
                cout << idx << " ";
            }
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
 