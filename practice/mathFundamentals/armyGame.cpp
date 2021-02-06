#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int gameWithCells(int n, int m) {
	int res(0);
	res = (n / 2) * (m / 2);

	if (n % 2 && m % 2)
		res += (n + m - 1) / 2 + (n + m - 1) % 2;
	else if (n % 2 || m % 2) {
		if (m % 2) {
			res += n / 2 + n % 2;
		} else if (n % 2) {
			res += m / 2 + m % 2;
		}
	}

	return res;
}

signed main() {
	cout << gameWithCells(70, 123) << "\n";
	return 0;
}
