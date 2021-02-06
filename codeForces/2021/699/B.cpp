#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n, k;
	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	vector<int> res;
	for (int i = 1; i < n; i++) {
		if (k <= 0)break;

		if (a[i] > a[i - 1]) {
			int d = a[i] - a[i - 1];

			int j = res.size() - 1;
			int tmp = d;
			while (tmp > 0) {
				res.push_back(i);
				tmp--;
				k--;
			}

			if (k <= 0) break;

			for (int x = j; x >= 0; x--) {
				for (int y = 0; y < d; y++) {
					res.push_back(res[x]);
					k--;

					if (k <= 0)	break;
				}
			}
			a[i - 1] = a[i];
		}
	}


	if (k)
		cout << -1 << "\n";
	else
		cout << res.back() << "\n";

	return;
}

signed main() {
	FIO;

	int tc(1);
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		// cout << "tc : " << i << "\t";
		solve();
	}

	return 0;
}
/*
4
4 3
4 1 2 3
2 7
1 8
4 5
4 1 2 3
3 1
5 3 1

2
1
-1
-1

*/