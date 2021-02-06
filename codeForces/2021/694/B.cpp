#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n, x;
	cin >> n >> x;

	int a[n];
	int totalSum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		totalSum += a[i];
	}

	int p = INT_MAX, f = -1;
	for (int i = 0; i < n; i++) {
		int temp = a[i];
		int c = 1;
		while (!(temp % x)) {
			temp /= x;
			c++;
		}

		if (temp % x) {
			if (c < p) {
				f = i;
			}
			p = min(c, p);
		}
	}

	totalSum = (totalSum * p);
	for (int i = 0; i < f; i++)
		totalSum += a[i];

	cout << totalSum << endl;

	return ;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	int tc;
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
2
1 2
12
4 2
4 6 8 2

36
44



3
2 3
1 12
4 2
4 6 8 9
5 7
49 49 49 7 49
Outputb
13
49
203
Answer
13
45
553
*/