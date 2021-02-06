#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n;
	cin >> n;

	ll dot = 0, times = 0;
	ll ans = 0;
	if (n % 2 == 1) {
		dot = 2;
		times = 1;
		for (ll i = 2; i <= n; i++) {
			if (i % 2) {
				dot++;
				times++;
			}
		}

		ans = 2 * dot * times;
	}
	else {
		dot = 1;
		times = 1;
		for (ll i = 2; i <= n; i += 2) {
			if (i % 2 == 0) {
				dot++;
				times++;
			}
		}

		ans = dot * times;
	}

	cout << ans << endl;

	return 0;
}
