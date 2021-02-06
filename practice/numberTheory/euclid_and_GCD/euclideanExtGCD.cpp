#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// used to find : linear diophantine equations, modulo inverse
// tc : log(min(a, b))
int gcdExtended(int a, int b, int *x, int *y) {
	if (a == 0) {
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1;
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	// update x, y using result's of recusrsove call
	*x = y1 - x1 * (b / a);
	*y = x1;

	return gcd;
}

signed main() {
	FIO;

	int x, y, a(35), b(15);
	int g = gcdExtended(a, b, &x, &y);

	cout << x << "*" << a << " + (" << y << "*" << b << " ) = " << g << endl;

	return 0;
}