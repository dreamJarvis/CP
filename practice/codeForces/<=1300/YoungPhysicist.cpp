#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    int sum[3] = {0};
    while(tc--){
        int x, y, z;
        cin >> x >> y >> z;

        sum[0] += x;
        sum[1] += y;
        sum[2] += z;
    }

    if(!sum[0] && !sum[1] && !sum[2])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
