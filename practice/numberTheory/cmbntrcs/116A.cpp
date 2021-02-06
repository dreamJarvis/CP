#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n;
	cin >> n;

	int a[28] = {0};
	string tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;

		a[tmp[0] - 'a']++;
	}

	int res(0);
	for (int i = 0; i < 28; i++) {
		if (a[i]) {
			int x = a[i] / 2;
			if (a[i] % 2) {
				res += (x * (x - 1) / 2) + ((x + 1) * x / 2);
			}
			else {
				res += 2 * (x * (x - 1) / 2);
			}
		}
	}

	cout << res << "\n";

	return ;
}

int main() {
	FIO;

	int tc(1);
	// cin >> tc;

	while (tc--) {solve();}

	return 0;
}
