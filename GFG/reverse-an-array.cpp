// // https://www.geeksforgeeks.org/problems/reverse-an-array/1
// using namespace std;
// class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         // code here
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();
//     while (t--) {
//         vector<int> arr;
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         int number;
//         while (ss >> number) {
//             arr.push_back(number);
//         }

//         Solution ob;
//         ob.reverseArray(arr);
//         for (int i = 0; i < arr.size(); i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }