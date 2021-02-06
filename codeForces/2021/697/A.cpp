#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


// solution
void solve() {
	int n(1);
	cin >> n;

	while (n % 2 == 0) {
		n /= 2;
	}

	if (n == 1)
		cout << "No\n";
	else
		cout << "Yes\n";
	return ;
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