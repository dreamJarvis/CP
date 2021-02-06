#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int gcd(int a, int b, int *x, int *y) {
	if (a == 0) {
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1;
	int g = gcd(b % a, a, &x1, &y1);

	*y = x1;
	*x = y1 - x1 * (b / a);

	return g;
}

signed main() {
	FIO;

	int a(2), b(3), c(1);
	// int a(4), b(18), c(10);

	if (a == 0 && b == 0) {
		if ( c == 0)
			cout << "INF Solutions" << "\n";
		else
			cout << "No Solution" << "\n";
	} else if (c % __gcd(a, b)) {
		cout << "No Solution" << "\n";
	} else {
		int x, y;
		int g = gcd(a, b, &x, &y);
		cout << a << "*(" << x*(c / g) << ") + " << b << "*(" << y*(c / g) << ") = " << c << "\n";
	}

	return 0;
}