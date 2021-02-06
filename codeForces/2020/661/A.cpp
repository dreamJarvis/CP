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

        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        bool flag = true;
        for(int i = 1; i < n; i++){
            if(arr[i]-arr[i-1] > 1){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
