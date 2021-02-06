#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	ll n;
	cin >> n;

	bool is2 = false, is1 = false;
	ll totalSum = 0;

	ll temp;
	for (ll i = 0; i < n; i++) {
		cin >> temp;
		totalSum += temp;

		if (temp == 2)
			is2 = true;
		if (temp == 1)
			is1 = true;
	}

	if (!(totalSum % 2)) {
		if ((is2 && is1) || (n % 2 == 0)) {
			cout << "YES" << endl;
			return;
		}
	}

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
