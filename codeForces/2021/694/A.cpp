#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll cl(ll a, ll x) {
	if (a % x)
		return (a / x + 1);
	return (a / x);
}

void solve() {
	ll n, x;
	cin >> n >> x;

	ll a[n];
	ll totalsum = 0, singleDiv = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		singleDiv += cl(a[i], x);
		totalsum += a[i];
	}

	cout << cl(totalsum, x) << " " << singleDiv << endl;

	return ;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	ll tc;
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}