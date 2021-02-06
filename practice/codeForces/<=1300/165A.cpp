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

    ll x[n];
    ll y[n];

    ll a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        x[i] = a;
        y[i] = b;
    }

    ll totalCount = 0;
    for(int i = 0; i < n; i++){
        bool l(false), r(false), u(false), d(false);
        for(int j = 0; j < n; j++){
            // checking the 4 conditions
            if(x[j] < x[i] && y[i] == y[j]) l = true;
            if(x[j] > x[i] && y[i] == y[j]) r = true;
            if(x[j] == x[i] && y[j] < y[i]) u = true;
            if(x[j] == x[i] && y[j] > y[i]) d = true;
        }

        if(l && r && u && d)    totalCount++;
    }

    cout << totalCount << endl;

    return 0;
}
