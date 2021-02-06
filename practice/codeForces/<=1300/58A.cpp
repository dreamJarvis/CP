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
	// int n;
	// cin >> n;

	// int a[n];
	// rep(i, 0, n) {
	// 	cin >> a[i];
	// }

	string str;
	cin >> str;

	string t = "hello";
	int j = 0;

	rep(i, 0, str.length()) {
		if (j >= t.length()) {
			cout << "YES" << endl;
			return ;
		}

		if (str[i] == t[j]) {
			j++;
		}
	}

	if (j == t.length())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

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
ahhellllloou

Output
Copy

YES

Input
Copy

hlelo

Output
Copy

NO
*/