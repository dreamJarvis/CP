#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


// solution
void solve() {
	int n(1);
	cin >> n;

	if (n % 2020 == 0 || n % 2021 == 0) {
		cout << "Yes" << endl;
		return;
	}

	int rem = n % 2020;
	int tempNum = rem * 2021;

	int remSum = n - tempNum;
	if (remSum >= 0 && remSum % 2020 == 0) {
		cout << "Yes" << endl;
		return;
	}

	cout << "No" << endl;
	return;
}

signed main() {
	FIO;

	int tc = 1;
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}