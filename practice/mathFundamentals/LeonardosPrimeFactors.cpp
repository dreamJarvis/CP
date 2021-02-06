#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int64_t MM = 1e18;
const int maxm = 100001;

int prime[] = {2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47};

void solve() {
	int n;
	cin >> n;

	int pr(1), res(0);
	for (int i = 0; i < 15; i++) {
		pr *= prime[i];
		if (pr <= n)
			res++;
	}

	cout << res << "\n";

	return;
}

signed main() {
	FIO;

	int tc(1);
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		solve();
	}

	return 0;
}