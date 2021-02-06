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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int s = 0, e = n-1;
        if(n%2 != 0){
            while(s < e){
                cout << arr[s] << " " << arr[e] << " ";
                s++;
                e--;
            }
            cout << arr[e] << endl;
            continue;
        }

        while(s <= e){
            cout << arr[s] << " " << arr[e] << " ";
            s++;
            e--;
        }
        cout << endl;
    }

    return 0;
}
