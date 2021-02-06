#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int x;
        cin >> x;

        if(x == 50){
            cout << -1 << endl;
            continue;
        }

        string ans = "";
        for(int i = 9; i >= 1; i--){
            if(x && i <= x){
                ans += to_string(i);
                x -= i;
            }
        }

        reverse(ans.begin(), ans.end());
        if(x)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
