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

	ll n, m;
	cin >> n >> m;

	ll a[n];
	for (ll i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	ll money = 0;
	for (ll i = 0; i < m; i++) {
		if (a[i] < 0)
			money += -a[i];
	}

	cout << money << endl;

	return 0;
}
