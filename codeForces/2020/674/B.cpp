#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int n, m;
        cin >> n >> m;

        bool flag = false;

        for(int i = 0; i < n; i++){
            int arr[2][2];
            for(int j = 0; j < 2; j++){
                cin >> arr[j][0] >> arr[j][1];
            }

            if(arr[0][1] == arr[1][0]){
                flag = true;
            }
        }

        if(m%2)
            flag = false;

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
