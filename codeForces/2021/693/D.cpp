#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	ll n;
	cin >> n;

	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.rbegin(), a.rend());

	ll alice = 0;
	for (ll i = 0; i < n; i++) {
		if (i % 2 == 0) {
			if (a[i] % 2 == 0)
				alice += a[i];
		}
		else {
			if (a[i] % 2)
				alice -= a[i];
		}
	}

	if (alice > 0)
		cout << "Alice" << endl;
	else if (alice < 0)
		cout << "Bob" << endl;
	else
		cout << "Tie" << endl;

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