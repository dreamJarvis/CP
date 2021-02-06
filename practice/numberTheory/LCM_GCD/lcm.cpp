#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 10e9 + 7

int gcd(int a, int b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int lcm(int a, int b) {
	return (a * b / gcd(min(a, b), max(a, b)));
}

signed main() {
	FIO;

	cout << lcm(20, 15) << endl;

	return 0;
}