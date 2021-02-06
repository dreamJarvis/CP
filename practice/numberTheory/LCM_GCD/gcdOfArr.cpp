#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007

int gcd(int a, int b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int getVal(int N, int A[]) {
	int totalPr = A[0];
	int totalGCD = A[0];
	for (int i = 1; i < N; i++) {
		totalPr = totalPr % mod * A[i] % mod;
		totalGCD = __gcd(totalGCD % mod, (int)A[i] % mod);
	}

	int ans = pow(totalPr % mod, totalGCD % mod);
	return ans;
}

signed main() {
	FIO;

	// int a[] = {2, 4};
	int a[] = {1, 3, 7};
	int n = sizeof(a) / sizeof(a[0]);

	cout << getVal(n, a) << endl;

	return 0;
}