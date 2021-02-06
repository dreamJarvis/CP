#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// tc:  log(min(a, b))
int gcd(int a, int b) {
	if (a == 0)
		return b;

	return gcd(b % a, a);
}

signed main() {
	FIO;

	int a(10), b(12);
	cout << gcd(a, b) << endl;

	return 0;
}