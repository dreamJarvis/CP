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

	int index = 0;
	while (a[index] >= a[index + 1]) {index++;}

	for (int i = index; i < n; i++) {
		if (a[i] > a[i - 1]) {
			int d = a[i] - a[i - 1];
			k -= d;

			if (k <= 0) {
				cout << i << "\n";
				return ;
			} else {
				for (int j = i - 1; j > index; j--) {
					k -= d;
					if (k <= 0) {
						// cout << i << "\t" << j << "\n";
						cout << j << "\n";
						return ;
					}

					// cout << i << "\t" << k << ", " << j << "\n";
				}
			}
		}
	}

	cout << -1 << "\n";

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