#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n;
	cin >> n;

	char a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	int res(0);
	for (int i = 0; i < n; i++) {

		// counting row-wise pairs
		int r(0);
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 'C')
				r++;
		}

		res += (r * (r - 1) / 2);

		// counting col-wise pairs
		int c(0);
		for (int j = 0; j < n; j++) {
			if (a[j][i] == 'C')
				c++;
		}

		res += (c * (c - 1) / 2);
	}

	cout << res << "\n";

	return ;
}

int main() {
	FIO;

	int tc(1);
	// cin >> tc;

	while (tc--) {solve();}

	return 0;
}
