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
	int n, k;
	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	k--;

	int e = k - 1;
	while (e >= 0 && a[e] == a[k]) {e--;}

	int j = k;
	int num = a[k];
	while (j < n && num == a[j]) {j++;}

	if (j < n)
		cout << -1 << "\n";
	else
		cout << e + 1 << "\n";

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
