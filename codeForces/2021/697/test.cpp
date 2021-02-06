#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INF 1e18
#define mod 1000000007

int nCr(int n, int r) {
	int ans(1);

	if (r > n - r)
		r = n - r;

	for (int i = 0; i < r; i++) {
		ans = (ans % mod * (n - i) % mod) % mod;
		ans = (ans % mod / (i + 1) % mod) % mod;
	}

	return ans;
}

void solve() {
	int n, k;
	scanf("%lld %lld", &n, &k);

	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%lld", &a[i]);

	sort(a, a + n, greater<int>());

	int minEle = a[k - 1];

	int countBigEle(0);
	int countMinEle(0);
	for (int i = 0; i < n; i++) {
		if (a[i] == minEle) countMinEle++;
		if (a[i] > minEle) countBigEle++;
	}

	int remPos = k - countBigEle;
	int ans = nCr(countMinEle, remPos) % mod;

	printf("%lld\n", ans);
	return ;
}

signed main() {
	FIO;

	int tc;
	scanf("%lld", &tc);

	while (tc--) {
		solve();
	}

	return 0;
}
/*
3
4 3
1 3 1 2
4 2
1 1 1 1
2 1
1 2

2
6
1
*/