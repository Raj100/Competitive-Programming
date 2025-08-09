#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        sort(arr.begin(), arr.end());


        vector<int> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
        }

        vector<int> ans(n, 0);

        for (int np = 1; np <= n; np++) {
            int sum = 0;
            int count = 0;

            for (int j = np - 1; j >= 0; j--) {
                sum += arr[j];
                count++;
                if (count == k) {
                    j--;
                    count = 0;
                }
            }
            ans[np - 1] = sum;
        }


        for (int i = 0; i < n; i++) {
            cout << ans[i];
            if (i != n - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}