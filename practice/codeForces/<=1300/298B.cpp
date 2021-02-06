#include <bits/stdc++.h>
using namespace std;

#define int 			long long
#define ld 				long double
#define f 				first
#define s 				second
#define pb 				push_back
#define ppb 			pop_back
#define mp 				make_pair
#define mem1(a) 		memset(a, -1, sizeof(a))
#define mem0(a)			memset(a, 0, sizeof(a))
#define all(x)      	(x).begin(),(x).end()
#define uniq(v)     	(v).erase(unique(all(v)),(v).end())
#define sz(x)       	(int)((x).size())
#define pll 			pair<int, int>
#define V(a) 			vector<a>
#define rep(i, a, b) 	for(int i=a;i<b;i++)
#define repR(i, a, b) 	for(int i=b-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

int lcm(int a, int b) { return ((a * b) / __gcd(a, b));}

// solution starts here
void solve() {
	int n, sx, sy, ex, ey;
	cin >> n >> sx >> sy >> ex >> ey;

	string str;
	cin >> str;

	int tx(0), ty(0);
	int c = abs(sx - ex);

	// east
	if (sx < ex) {
		rep(i, 0, n) {
			if (str[i] == 'E') {
				c--;
			}

			if (!c) {
				tx = i + 1;
				break;
			}
		}
	} else if (sx > ex) {						// west
		rep(i, 0, n) {
			if (str[i] == 'W') {
				c--;
			}

			if (!c) {
				tx = i + 1;
				break;
			}
		}
	}

	int d = abs(sy - ey);
	// north
	if (sy < ey) {
		rep(i, 0, n) {
			if (str[i] == 'N') {
				d--;
			}

			if (!d) {
				ty = i + 1;
				break;
			}
		}
	} else if (sy > ey) {						// south
		rep(i, 0, n) {
			if (str[i] == 'S') {
				d--;
			}

			if (!d) {
				ty = i + 1;
				break;
			}
		}
	}

	if (c || d) {
		cout << -1 << endl;
		return;
	}

	cout << max(tx, ty) << endl;

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
5 0 0 1 1
SESNW

Output
Copy

4

Input
Copy

10 5 3 3 6
NENSWESNEE

Output
Copy

-1
*/