#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	int tc;
	cin >> tc;

	while (tc--) {
		int n, m;
		cin >> n;

		int a[n];
		vector<int> prefixA(n + 1, 0);

		for (int i = 1; i <= n; i++) {
			cin >> a[i - 1];
			prefixA[i] = prefixA[i - 1] + a[i - 1];
		}

		cin >> m;

		int b[m];
		vector<int> prefixB(m + 1, 0);

		for (int i = 1; i <= m; i++) {
			cin >> b[i - 1];
			prefixB[i] = prefixB[i - 1] + b[i - 1];
		}

		int ans = 0;
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				ans = max(ans, (prefixA[i] + prefixB[j]));
			}
		}

		cout << ans << endl;
	}

	return 0;
}