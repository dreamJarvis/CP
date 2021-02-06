#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n;
	cin >> n;

	float res(0);
	while (n) {
		res += ((float)1 / n);
		n--;
	}

	cout << fixed << setprecision(11) << res << "\n";

	return ;
}

signed main() {
	FIO;

	int tc(1);
	while (tc--) {solve();}

	return 0;
}
