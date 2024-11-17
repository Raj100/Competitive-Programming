#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int n,m ;
    cin>>n ;
    cin>>m ;
    int count = 0 ;
    vector<vector<int>> arr(n,vector<int> (2)) ;
    vector<vector<int>> arr2(m,vector<int> (2)) ;
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0 ; i<m ; i++)
        cin>>arr2[i][0] >> arr2[i][1] ;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][0] == arr2[j][1] && arr[i][1] == arr2[j][0] && arr[i][0] != -1 && arr2[j][0] != -1) {
                count++;
                arr[i][0] = -1;
                arr2[j][0] = -1;
            }
        }
    }

    cout<<count ;
    return 0 ;
}