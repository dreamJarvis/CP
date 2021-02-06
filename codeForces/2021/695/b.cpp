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

const int N = 3e5;
int a[N], n;
int lcm(int a, int b) { return ((a * b) / __gcd(a, b));}

bool isHill(int i) {
	return ((i > 0 && i < n - 1) && (a[i] > a[i - 1] && a[i] > a[i + 1]));
}

bool isValley(int i) {
	return ((i > 0 && i < n - 1) && (a[i] < a[i - 1] && a[i] < a[i + 1]));
}

void solve() {
	cin >> n;

	rep(i, 0, n) {
		cin >> a[i];
	}

	int totalHillValley = 0;
	V(bool) hv(n, false);
	rep(i, 1, n - 1) {
		if (isHill(i) || isValley(i)) {
			hv[i] = true;
			totalHillValley++;
		}
	}

	int ans = totalHillValley;
	rep(i, 1, n - 1) {
		int temp = a[i];
		a[i] = a[i - 1];
		ans = 	min(ans, (
		                totalHillValley  - hv[i] - hv[i + 1] - hv[i - 1]) +
		            isHill(i) + isHill(i + 1) + isHill(i - 1) +
		            isValley(i) + isValley(i + 1) + isValley(i - 1)
		          );

		a[i] = a[i + 1];
		ans = 	min(ans, (
		                totalHillValley - hv[i] - hv[i + 1] - hv[i - 1]) +
		            isHill(i) + isHill(i + 1) + isHill(i - 1) +
		            isValley(i) + isValley(i + 1) + isValley(i - 1)
		          );
		a[i] = temp;
	}

	cout << ans << endl;

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
/*
4
3
1 5 3
5v
2 2 2 2 2
6
1 6 2 5 2 10
5
1 6 2 5 1

Output
Copy

0
0
1
0

*/