#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n;
	cin >> n;

	int costEven(0), costOdd(0);
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (a[i] % 2)	costEven++;
		if (a[i] % 2 == 0)	costOdd++;
	}

	cout << min(costOdd, costEven) << "\n";

	return ;
}

int main() {
	FIO;

	int tc(1);
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
2
2
2 4
3
4 1 2
*/