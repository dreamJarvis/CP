#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FIO;

    ll tc;
    cin >> tc;

    while (tc--) {
        ll n, k;
        cin >> n >> k;

        cout << (k / n) << endl;
    }

    return 0;
}