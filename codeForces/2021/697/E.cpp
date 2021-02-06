#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INF 1e18
#define mod 1000000007

int mul(int x, int y) {
	return (x * y % mod);
}

int fact(int n) {
	int ans(1);
	for (int i = 2; i <= n; i++)
		ans = mul(ans, i);
	return ans;
}

int fastPow(int base, int exp) {
	if (exp == 0)return 1;
	int temp = fastPow(base, exp / 2);

	if (exp % 2 == 0)
		return (mul(temp, temp));
	return (mul(base, mul(temp, temp)));
}

int modInv(int n) {
	return fastPow(n, mod - 2);
}

int nCr(int n, int r) {
	int ans(1);

	if (r > n - r)
		r = n - r;

	for (int i = 0; i < r; i++) {
		ans = mul(ans, (n - i));
		ans = mul(ans, modInv(i + 1));
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
	int ans = nCr(countMinEle, remPos);

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