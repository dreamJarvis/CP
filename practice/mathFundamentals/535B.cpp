#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n;
	cin >> n;

	if (n == 4) {
		cout << 1 << "\n";
		return ;
	}
	if (n == 7) {
		cout << 2 << "\n";
		return ;
	}

	vector<int> a;
	a.push_back(4);
	a.push_back(7);

	int pos(2);
	int i = 0;
	int tc = 7;
	while (1) {
		int x = a[i] * 10 + 4;
		pos++;
		if (x == n) {
			cout << pos << "\n";
			return ;
		}

		int y = a[i] * 10 + 7;
		pos++;
		if (y == n) {
			cout << pos << "\n";
			return ;
		}

		a.push_back(x);
		a.push_back(y);
		i++;
	}

	return;
}

signed main() {
	FIO;

	int tc(1);
	// cin >> tc;

	for (int i = 0; i < tc; i++) {
		// cout << "tc : " << i << "\t";
		solve();
	}

	return 0;
}