// https://practice.geeksforgeeks.org/problems/number-game0303/1
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007

int lcm(int a, int b) {
	return ((a * b) / __gcd(a, b));
}

int numGame(int n) {
	int minDivisor(1);
	for (int i = 2; i <= n; i++) {
		minDivisor = lcm(minDivisor % mod, i % mod) % mod;
	}

	return minDivisor % mod;
}

signed main() {
	FIO;

	cout << numGame(100000) << endl;

	return 0;
}