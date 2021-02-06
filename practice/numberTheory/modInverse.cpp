/*
	https://www.geeksforgeeks.org/fermats-little-theorem/
	Fermat’s little theorem
*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int fastPow(int base, int exp, int mod) {
	if (exp == 0)	return 1;
	int temp = fastPow(base, exp / 2, mod) % mod;

	if (exp % 2)
		return (((base * temp) % mod) * temp) % mod;
	return (temp * temp) % mod;
}

int modInv(int a, int m) {
	if (__gcd(a, m))
		return fastPow(a, m - 2, m);
	return -1;
}

signed main() {
	FIO;

	// int a = 8, b = 7, mod = 5;
	// int invMod = modInv(b, mod);

	// int ans = (a % mod * (invMod)) % mod;
	// cout << ans << endl;

	cout << modInv(7, 5) << endl;

	return 0;
}