#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int l, r;
        cin >> l >> r;

        int lcm;
        for(int i = 1; i <= r; i++)
            if(l%i == 0 && r%i==0)
                lcm = i;

        bool flag = false;
        // int n = l+r;
        for(int i = lcm; i <= r; i++){
            float a = l%i;
            float b = r%i;
            float c = (float)i/2.0;


            if(a >= c && b >= c){
                // cout << a << ", " << b << ", " << c << endl;
                // cout << i << endl;
                flag = true;
                break ;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
