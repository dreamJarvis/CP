#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FIO;

    ll n, m;
    cin >> n >> m;

    ll a[m];
    for (ll i = 0; i < m; i++)
        cin >> a[i];

    ll totalTime = a[0] - 1;
    for (ll i = 1; i < m; i++) {
        if (a[i] < a[i - 1]) {
            totalTime += (n - a[i - 1] + a[i]);
        }
        else if (a[i] > a[i - 1]) {
            totalTime += (a[i] - a[i - 1]);
        }
    }

    cout << totalTime << endl;

    return 0;
}