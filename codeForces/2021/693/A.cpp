#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	ll w, h, n;
	cin >> w >> h >> n;

	ll c = 1;
	while (!(w % 2)) {
		c *= 2;
		w /= 2;
	}

	while (!(h % 2)) {
		c *= 2;
		h /= 2;
	}

	if (c >= n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return;
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