#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


pair<ll, ll> intersection(pair<ll, ll> &a, pair<ll, ll> &b) {
	return (make_pair(max(a.f, b.f), min(a.s, b.s)));
}

void solve(int tc = 0) {
	bool ans = true;

	ll n, k;
	cin >> n >> k;

	ll a[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	pair<ll, ll> curr = make_pair(-1e9, 1e9);

	for (ll i = 0; i < n; i++) {
		pair<ll, ll> pos;
		if (i == 0 || i == n - 1) pos = make_pair(a[i], a[i]);
		else pos = make_pair(a[i], a[i] + k - 1);

		curr.f -= (k - 1);
		curr.s += (k - 1);

		curr = intersection(curr, pos);

		if (curr.f > curr.s) {
			ans = false;
			break;
		}
	}

	cout << (ans ? "YES\n" : "NO\n");
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