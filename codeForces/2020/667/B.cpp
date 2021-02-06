#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        long long ans = 1e18;
        int da, db;

        // case 1, decreasing from a first
        da = min(n, a-x);
        db = min(n-da, b-y);
        ans = min(ans, (a-da)*1ll*(b-db));

        // case 2, decreasing from b first
        db = min(n, b-y);
        da = min(n-db, a-x);
        ans = min(ans, (a-da)*1ll*(b-db));

        cout << ans << endl;
    }

    return 0;
}
