#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        bool isEqual = true;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // are all elements same
        for(int i = 0; i < n-1; i++){
            if(arr[i] != arr[i+1]){
                isEqual = false;
                break;
            }
        }

        int minOperations = 0;
        if(!isEqual){
            vector<int> dist(n+1, 1);
            for(int i = 0; i < n-1; i++){
                if(arr[i] == arr[i+1]){
                    continue;
                }
                if(dist[arr[i]])
                    dist[arr[i]]++;
                else
                    dist[arr[i]] = 1;
            }

            dist[arr[0]]--;

            int minNum = arr[0], minOp = dist[arr[0]];
            for(int i = 0; i < n; i++){
                if(dist[arr[i]] < minOp){
                    minNum = arr[i];
                    minOp = dist[arr[i]];
                }
            }

            minOperations = minOp;
        }

        cout << minOperations << endl;
    }

    return 0;
}
