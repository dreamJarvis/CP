#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n, k;
	cin >> n >> k;

	while (k % 2 == 0) {
		k /= 2;
	}

	bool flag(true);
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;

		if (tmp % k != 0) {
			flag = false;
			break;
		}
	}

	if (flag)
		cout << "YES\n";
	else
		cout << "NO\n";

	return ;
}

signed main() {
	FIO;

	int tc(1);
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
2
3 2
3 4 3
5 6
6 6 8 7 3
*/