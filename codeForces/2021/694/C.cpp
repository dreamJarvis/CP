#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n, m;
	cin >> n >> m;

	int a[n];
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		a[i] = temp - 1;
	}

	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n, greater<int>());

	int totalCost = 0;
	vector<bool> visited(m, false);
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (j < m && b[a[i]] > b[j] && !visited[j]) {
			totalCost += b[j];
			visited[j] = true;
			j++;
		}
		else if (b[a[i]] <= b[j]) {
			totalCost += b[a[i]];
		}
	}

	cout << totalCost << endl;

	return ;
}

signed main() {
	FIO;

	int tc;
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
