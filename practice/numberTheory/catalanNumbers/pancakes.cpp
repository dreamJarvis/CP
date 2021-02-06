#include <bits/stdc++.h>

using namespace std;
#define maxn 1111
#define mod 1000000007

long long C[maxn][maxn];
int dp[maxn];

int main() {
	int nt;
	scanf("%d", &nt);

	// binomial coeff
	for (int i = 0; i < maxn; i++)
		C[i][0] = 1, C[i][i] = 1;

	for (int i = 1; i < maxn; i++)
		for (int j = 1; j < i; j++)
			C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]), C[i][j] = C[i][j] % mod;

	dp[0] = dp[1] = 1;
	for (int i = 2; i <= maxn; i++) {
		long long ans = 0;
		for (int k = 0; k < i; k++) {
			ans += ((long long)dp[k] * C[i - 1][k]);
			if (ans >= mod)
				ans = ans % mod;
		}
		dp[i] = ans;
	}

	while (nt--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
	return 0;
}