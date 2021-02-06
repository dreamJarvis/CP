#include <bits/stdc++.h>
using namespace std;

#define M 1e9
#define int long long
#define ld long double
#define f first
#define s second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define pll pair<int, int>
#define V(a) vector<a>
#define rep(i, a, b) for(int i=a;i<b;i++)
#define repR(i, a, b) for(int i=b-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int lcm(int a, int b) { return ((a * b) / __gcd(a, b));}

void solve() {
	int k;
	cin >> k;

	int n = 12;
	int a[n];
	rep(i, 0, n) {
		cin >> a[i];
	}

	sort(a, a + n);
	int sum = 0;
	int noOfMonths = 0;
	repR(i, 0, n) {
		if (sum >= k) {
			break;
		}
		sum += a[i];
		noOfMonths++;
	}

	if (sum >= k)
		cout << noOfMonths << endl;
	else
		cout << -1 << endl;
	return ;
}

signed main() {
	FIO;
	int tc = 1;
	// cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}