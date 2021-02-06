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

    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll diff = abs(a[0]-a[n-1]);
	ll x = 0, y = n-1;

    for(int i = 1; i < n; i++){
        ll d = abs(a[i]-a[i-1]);

        if(diff > d){
            x = i-1;
            y = i;
            diff = d;
        }
    }



    cout << x+1 << " " << y+1 << endl;

    return 0;
}
