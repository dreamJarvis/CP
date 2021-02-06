#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld 	long double
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long INF = 1e18;
const int32_t MOD = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

// solution starts here
void solve() {
	int n = 1;
	cin >> n;

	int freq[8] = {0};
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		freq[temp]++;
	}

	if (	freq[5] == 0 && freq[7] == 0 &&
	        freq[1] == freq[4] + freq[6] &&
	        freq[2] >= freq[4] &&
	        freq[2] + freq[3] == freq[4] + freq[6]
	   ) {

		for (int i = 0; i < freq[4]; i++)
			cout << "1 2 4\n";

		freq[2] -= freq[4];
		for (int i = 0; i < freq[2]; i++)
			cout << "1 2 6\n";

		for (int i = 0; i < freq[3]; i++)
			cout << "1 3 6\n";
	}
	else
		cout << -1 << "\n";

	return ;
}

signed main() {
	FIO;
	int tc = 1;
	// cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
6
1 1 1 2 2 2

6
2 2 1 1 4 6
*/