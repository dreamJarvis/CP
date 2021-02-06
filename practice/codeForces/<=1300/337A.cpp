#include <bits/stdc++.h>
using namespace std;

#define M1 1e9
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
	int n, m;
	cin >> n >> m;

	int a[m];
	rep(i, 0, m) {
		cin >> a[i];
	}

	sort(a, a + m);

	int minDiff = INT_MAX;
	rep(i, 0, m - n + 1) {
		minDiff = min(minDiff, (a[i + n - 1] - a[i]));
	}

	cout << minDiff << endl;

	return ;
}

signed main() {
	FIO;
	int tc = 1;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
4 6
10 12 10 7 5 22

2 2
4 4
*/