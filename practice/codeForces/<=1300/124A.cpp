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
	int n, a, b;
	cin >> n >> a >> b;

	if (((n - a) - 1) > b)
		cout << b + 1 << endl;
	else
		cout << (n - a) << endl;

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
3 1 1

Output
Copy

2

Input
Copy

5 2 3

Output
Copy

3
*/