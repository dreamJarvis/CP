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
	int n;
	cin >> n;

	string a = "0123456789";
	string ans =  "";
	if (n > 2) {
		ans += "989";
		n -= 3;

		int q = n / 10;
		int r = n % 10;

		rep(i, 0, q) {
			ans += a;
		}

		ans += a.substr(0, r);
	}
	else {
		if (n == 1)
			ans = "9";
		else if (n == 2)
			ans = "98";
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
2
1
2

Output
Copy

9
98

*/