
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	ll tc;
	cin >> tc;

	while (tc--) {
		ll x, y, k, n;
		cin >> x >> y >> k >> n;

		ll p = min(x, y);
		ll t = max(x, y);


		bool ans = false;
		while (p < n && t > 0) {
			if (p == t) {
				ans = true;
				break;
			}

			p += k;
			t -= k;
		}

		if (ans)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}