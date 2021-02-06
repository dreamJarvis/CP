#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int lcm(int a, int b) {
	return (a * b / __gcd(a, b));
}

int findValue(int x, int y, int z) {
	int g = __gcd(y, z);
	return lcm(x, g);
}

signed main() {
	FIO;

	cout << findValue(15, 20, 100) << "\n";

	return 0;
}