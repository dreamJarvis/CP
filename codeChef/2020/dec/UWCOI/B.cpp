#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli n, m;
	cin >> n >> m;

	lli a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	lli b[m];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	sort(a, a + n);
	sort(b, b + m, greater<int>());

	lli swaps = 0;
	lli i = 0;
	lli j = 0;
	while (i < n && j < m) {
		if (b[j] < a[i]) {
			i++;
		}
		else if (b[j] >= a[i]) {
			swaps += i;
			j++;
		}
	}

	swaps += (m - j) * n;

	cout << swaps << endl;

	return 0;
}
