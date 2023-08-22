#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > count_continuous_subarrays(const vector<int>& arr) {
    int n = arr.size();
    int count = 0;
vector<vector<int> > a;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            bool valid = true;
            int min_val = arr[i];
            int max_val = arr[i];
            vector<int> temp;
            for (int k = i; k <= j; ++k) {
                min_val = min(min_val, arr[k]);
                max_val = max(max_val, arr[k]);

                temp.push_back(arr[k]);

                if (max_val - min_val > 2 ) {
                    valid = false;
                    temp.push_back(-1);
                    break;
                }
            }
            a.push_back(temp);

            if (valid) {
                count++;
            }
        }
    }

    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

     vector<vector<int> > v = count_continuous_subarrays(arr);
      for (int i = 0; i < v.size(); i++) {
        // Printing the element at
        // index 'i' of vector
        for(int j=0;j<v[i].size();j++){
        cout << v[i][j];
        }
          cout<< endl;
    }
    cout << endl;
    return 0;
}
