#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n, k;
	cin >> n >> k;

	int totalSolved(n), maxTimeTaken(0);
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;

		if (temp == -1) {
			totalSolved--;
		}

		maxTimeTaken = max(maxTimeTaken, temp);
	}


	if (totalSolved < ceil((double)n / 2))
		cout << "Rejected" << "\n";
	else {
		if (maxTimeTaken > k)
			cout << "Too slow" << "\n";
		else {
			if (maxTimeTaken <= 1 && totalSolved == n)
				cout << "Bot" << "\n";
			else
				cout << "Accepted" << "\n";
		}
	}

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