#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	ll n;
	cin >> n;

	ll a[n];
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}

	ll maxScore = -1;
	vector<ll> b(n, 0);

	for (ll i = 0; i < n; i++) {
		b[i] = max(a[i], b[i]);
		if (i + a[i] < n) {
			b[i + a[i]] = max(a[i + a[i]] + b[i], b[i + a[i]]);
		}
		maxScore = max(maxScore, b[i]);
	}

	cout << maxScore << endl;
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
/*
4
5
7 3 1 2 3
3
2 1 4
6
2 1000 2 3 995 1
5
1 1 1 1 1

*/