#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// Driver function
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	ll tc;
	cin >> tc;

	while (tc--) {
		ll n;
		cin >> n;

		ll a[n];
		for (ll i = 0; i < n; i++)
			cin >> a[i];

		sort(a, a + n);

		for (ll i = 0; i < n; i++) {
			if (a[i] == a[i + 1]) {
				while (i + 1 < n && a[i] == a[i + 1])i++;
				a[i]++;
			} else {
				if (a[i] == a[i - 1]) {
					a[i]++;
				}
			}
		}

		unordered_map<ll, bool> freq;
		for (ll i = 0; i < n; i++) {
			freq[a[i]] = true;
		}

		cout << freq.size() << endl;
	}

	return 0;
}
/*
5
6
1 2 2 2 5 6
2
4 4
6
1 1 3 4 4 5
1
1
6
1 1 1 2 2 2


5
2
6
1
3


*/