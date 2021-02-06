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
            arr[i] = i+1;

        int s = 0, e = n-1;
        reverse(arr, arr+n);

        if(n > 2)
            swap(arr[n/2], arr[0]);

        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}
