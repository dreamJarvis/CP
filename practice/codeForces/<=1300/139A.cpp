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

    ll n;
    cin >> n;

    int a[7];
    for (int i = 0; i < 7; i++)
        cin >> a[i];

    ll i = 0;
    while (n > 0) {
        n -= a[i];
        i = (i + 1) % 7;
    }

    if (i == 0)
        cout << 7 << endl;
    else
        cout << i << endl;

    return 0;
}
/*
100
15 20 20 15 10 30 45

433
109 58 77 10 39 125 15
*/
