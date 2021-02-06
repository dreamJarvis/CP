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
	int n, k;
	cin >> n >> k;

	int mod = n % k;
	int ans = (k - mod) % k;

	ans = (ans + n - 1) / n;		// finding the ceil value

	cout << ans + 1 << endl;

	return ;
}

signed main() {
	FIO;
	int tc = 1;
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
4
1 5
4 3
8 8
8 17

1
2 9

1
3 27
*/