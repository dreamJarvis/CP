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
	int k;
	cin >> k;

	string str;
	cin >> str;

	int n = str.length();
	vector<int> a(28, 0);
	rep(i, 0, n) {
		a[(str[i] - 'a')]++;
	}

	string temp = "";
	bool flag = true;
	rep(i, 0, 28) {
		if (a[i] && a[i] % k) {
			cout << -1 << endl;
			return ;
		}

		if (a[i]) {
			int r = a[i] / k;
			rep(j, 0, r) {
				temp += (char)('a' + i);
			}
		}
	}

	string ans = "";
	rep(i, 0, k) {
		ans += temp;
	}
	cout << ans << endl;

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
/*
2
aazz

Output
Copy

azaz

Input
Copy

3
abcabcabz

Output
Copy

-1
*/