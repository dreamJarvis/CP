#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int count[n];
        memset(count, -1, sizeof(count));

        for(int i = 0; i < n; i++){
            if(count[i] != -1 && arr[count[i]] >= arr[i+1]){
                count[i+1] = count[i];
            }
            else if(arr[i] > arr[i+1]){
                count[i+1] = i;
            }
            else if(arr[i] < arr[i+1]){
                count[i+1] = i+1;
            }
        }

        if(count[n-1] != -1)
            cout << count[n-1]+1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
