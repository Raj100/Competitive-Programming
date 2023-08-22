#include <iostream>
#include <vector>

using namespace std;

int count_continuous_subarrays(const vector<int>& arr) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            bool valid = true;
            int min_val = arr[i];
            int max_val = arr[i];

            for (int k = i; k <= j; ++k) {
                min_val = min(min_val, arr[k]);
                max_val = max(max_val, arr[k]);

                if (max_val - min_val > 2) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = count_continuous_subarrays(arr);
    cout << result << endl;

    return 0;
}
