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

// solution starts here
// refer to the editorial : https://discuss.codechef.com/t/minil-editorial/84214
void solve() {
	int n, m;
	cin >> n >> m;

	char a[n][m];
	rep(i, 0, n) {
		rep(j, 0, m) {
			cin >> a[i][j];
		}
	}

	// case 1
	if (n * m % 2 == 0) {
		int cnt1(0), cnt2(0);
		rep(i, 0, n) {
			rep(j, 0, m) {
				if (i % 2 == 0) {
					if (j % 2 == 0 && a[i][j] != '*') {
						cnt1++;
					}
					else if (j % 2 && a[i][j]  != '.') {
						cnt1++;
					}

					if (j % 2 && a[i][j] != '*') {
						cnt2++;
					}
					else if (j % 2 == 0 && a[i][j] != '.') {
						cnt2++;
					}
				}
				else {
					if (j % 2 && a[i][j] != '*') {
						cnt1++;
					}
					else if (j % 2 == 0 && a[i][j] != '.') {
						cnt1++;
					}

					if (j % 2 == 0 && a[i][j] != '*') {
						cnt2++;
					}
					else if (j % 2 && a[i][j]  != '.') {
						cnt2++;
					}
				}
			}
		}

		cout << min(cnt1, cnt2) << endl;
		return;
	}

	// case 2
	int cnt(0);
	rep(i, 0, n) {
		rep(j, 0, m) {
			if (i % 2 == 0) {
				if (j % 2 && a[i][j] != '.') {
					cnt++;
				}
				else if (j % 2 == 0 && a[i][j] != '*') {
					cnt++;
				}
			}
			else {
				if (j % 2 == 0 && a[i][j] != '.') {
					cnt++;
				}
				else if (j % 2 && a[i][j]  != '*') {
					cnt++;
				}
			}
		}
	}

	cout << cnt << endl;

	return ;
}

signed main() {
	FIO;
	int tc(1);
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
2
2 2
..
*.
2 4
*..*
*.*.
*/