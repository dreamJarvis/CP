#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n, k;
	cin >> n >> k;
	int cnt[26];
	int curl = 0;
	for (int i = 0; i < 26; i++) {
		if (k & 1 << i) {
			cnt[i] = 1;
			curl++;
		}
		else
			cnt[i] = 0;
	}

	if (curl > n || k < n) {
		cout << -1;
		return;
	}

	// cout << curl << endl;

	for (int i = 25; i > 0; i--) {
		if ((n - curl) <= cnt[i]) {
			cnt[i] -= n - curl;
			cnt[i - 1] += 2 * (n - curl);
			break;
		}
		curl += cnt[i];
		// cout << i << " : " << cnt[i] << ", : " << curl << endl;

		cnt[i - 1] += 2 * cnt[i];
		cnt[i] = 0;
	}

	for (int i = 0; i < 26; i++) {
		while (cnt[i]--)
			cout << (char)('a' + i);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	int t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}
}