#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0;  i < n; i++)
		cin >> a[i];

	ll m;
	cin >> m;
	ll b[m];
	for (ll i = 0; i < m; i++)
		cin >> b[i];

	unordered_map<ll, ll> freq;
	ll totalMax = 0;
	for (ll i = m - 1; i >= 0; i--) {
		ll maxRatio = 0;
		for (ll j = 0; j < n; j++) {
			if (b[i] % a[j] == 0) {
				maxRatio = max(maxRatio, b[i] / a[j]);
				totalMax = max(totalMax, maxRatio);
			}
		}

		freq[maxRatio]++;
	}

	cout << freq[totalMax] << endl;

	return 0;
}
