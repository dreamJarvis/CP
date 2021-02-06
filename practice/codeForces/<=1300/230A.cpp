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
	int n, s;
	cin >> s >> n;

	multiset<pll> st;
	int x, y;
	rep(i, 0, n) {
		cin >> x >> y;
		st.insert(mp(x, y));
	}

	for (auto &i : st) {
		if (s <= i.f) {
			cout << "NO" << endl;
			return ;
		}
		s += i.s;
	}

	cout << "YES" << endl;

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
2 2
1 99
100 0

Output
Copy

YES

Input
Copy

10 1
100 100

Output
Copy

NO

123 2
78 10
130 0


100 5
99 100
199 1
199 1
199 1
202 1

*/