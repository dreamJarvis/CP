#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n;
	cin >> n;

	vector<int> odd, even;
	int totalSum(0);
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		totalSum += a[i];

		if (a[i] % 2)
			odd.push_back(a[i]);
		else
			even.push_back(a[i]);
	}


	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			if (totalSum % 2 && odd.size() > 0) {
				totalSum -= 2 * odd.back();
				odd.pop_back();
			}
			else if (even.size() > 0) {
				even.pop_back();
			}
		}
		else {
			if (totalSum % 2 == 0 && odd.size() > 0) {
				totalSum -= 2 * odd.back();
				odd.pop_back();
			}
		}

		// cout << "ts : " << totalSum << "\n";
	}

	if (totalSum % 2 == 0)
		cout << 1 << "\n";
	else
		cout << 2 << "\n";

	return;
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
3
2
1 2
3
1 1 2
3
1 2 4

*/