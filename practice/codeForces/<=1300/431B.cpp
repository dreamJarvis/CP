#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld 	long double
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long INF = 1e18;
const int32_t MOD = 1e9 + 7;
const int32_t MM = 998244353;

// solution starts here
void solve() {
	int n = 5;
	int a[5][5];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	std::vector<int> seq({0, 1, 2, 3, 4});

	int totalSum(0);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j += 2) {
			if (j + 1 < n) {
				int x = seq[j];
				int y = seq[j + 1];
				totalSum += (a[x][y] + a[y][x]);
			}
		}
	}

	while (next_permutation(seq.begin(), seq.end())) {
		int sum(0);
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j += 2) {
				if (j + 1 < n) {
					int x = seq[j];
					int y = seq[j + 1];
					sum += (a[x][y] + a[y][x]);
				}
			}
		}

		totalSum = max(totalSum, sum);
	}

	cout << totalSum << "\n";

	return ;
}

signed main() {
	FIO;
	int tc(1);
	// scanf("%lld", &tc);

	while (tc--) solve();

	return 0;
}
/*
0 0 0 0 9
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
7 0 0 0 0


32

0 43 21 18 2
3 0 21 11 65
5 2 0 1 4
54 62 12 0 99
87 64 81 33 0

620
*/