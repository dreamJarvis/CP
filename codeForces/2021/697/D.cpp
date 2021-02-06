#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INF 1e18

// solution
void solve() {
	int n, m;
	cin >> n >> m;

	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int> imp1, imp2;
	for (int i = 0; i < n; i++) {
		cin >> b[i];

		if (b[i] == 1)
			imp1.push_back(a[i]);
		else
			imp2.push_back(a[i]);
	}

	sort(imp1.begin(), imp1.end(), greater<int>());
	sort(imp2.begin(), imp2.end(), greater<int>());
	for (int i = 1; i < imp1.size(); i++) {
		imp1[i] += imp1[i - 1];
	}

	for (int i = 1; i < imp2.size(); i++) {
		imp2[i] += imp2[i - 1];
	}

	int ans = INF;
	for (int i = 0; i <= imp2.size(); i++) {
		int ni = i;

		int sum = 0;
		if (i) {
			sum = imp2[i - 1];
		}

		int cost = 2 * ni;

		if (sum >= m) {
			ans = min(ans, cost);
		}

		int dist = distance(imp1.begin(), lower_bound(imp1.begin(), imp1.end(), (m - sum)));

		if (dist < imp1.size()) {
			ans = min(ans, cost + dist + 1);
		}
	}

	if (ans == INF)
		ans = -1;

	cout << ans << endl;

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
5
5 7
5 3 2 1 4
2 1 1 2 1
1 3
2
1
5 10
2 3 2 3 2
1 2 1 2 1
4 10
5 1 3 4
1 2 1 2
4 5
3 2 1 2
2 1 2 1

2
-1
6
4
3

*/