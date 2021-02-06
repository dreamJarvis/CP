#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int a, b, c;
	cin >> a >> b >> c;

	if ((a == (b + c)) || (b == (a + c)) || (c == (a + b)))
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
	return ;
}

signed main() {
	FIO;

	int tc(1);
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}