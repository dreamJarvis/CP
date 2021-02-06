#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int fact(int n) {
	if (n == 0 || n == 1)return 1;
	return (n * fact(n - 1));
}

int lcm(int a, int b) {
	return (a * b / __gcd(a, b));
}

signed main() {

	cout << lcm(1, 3) << "\n";

	return 0;
}