#include <bits/stdc++.h>
using namespace std;

#define int 			long long
#define ld 				long double
#define f 				first
#define s 				second
#define pb 				push_back
#define ppb 			pop_back
#define mp 				make_pair
#define mem1 			memset(a, -1, sizeof(a))
#define mem0			memset(a, 0, sizeof(a))
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

V(V(int)) util(int a[], int n, int k) {
	V(V(int)) dp(n + 1, V(int)(k + 1, M));

	// minimum sum will be 0, when there are no weights in the array
	rep (i, 0, n + 1) {
		dp[i][0] = 0;
	}

	rep (i, 1, n + 1) {
		rep (j, 0, k + 1) {
			if (j <= a[i - 1]) {
				dp[i][j] = a[i - 1];
				continue;
			}

			if (dp[i - 1][j - a[i - 1]] == M) {
				dp[i][j] = M;
			}
			else {
				dp[i][j] = min(
				               a[i - 1] + dp[i - 1][j - a[i - 1]],
				               dp[i - 1][j]
				           );
			}
		}
	}

	return dp;
}

void solve() {
	int n(0), k(0);
	cin >> n >> k;

	int a[n], b[n];
	rep(i, 0, n) {
		cin >> a[i];
	}

	sort(a, a + n, greater<int>());

	// defining the suffix sum
	int suffixSum[n];
	suffixSum[0] = a[0];
	rep(i, 1, n) {
		suffixSum[i] = suffixSum[i - 1] + a[i];
	}

	// getting the min sum >= k;
	V(V(int)) dp(n + 1, V(int)(k + 1, M));
	dp = util(a, n, k);

	// finding the min elements with sum >= 2*k
	rep(i, 1, n) {
		if (suffixSum[i] - dp[i][k] >= k) {
			cout << i + 1 << endl;
			return ;
		}
	}

	cout << -1 << endl;
	return ;
}

signed main() {
	FIO;

	int tc(1);
	cin >> tc;

	rep (i, 0, tc) {
		// cout << "case #" << i + 1 << " : ";
		solve();
	}

	return 0;
}
/*
3
8 38
7 8 19 7 8 7 10 20
4 5
2 10 4 9
5 5
1 2 3 10

7
2
2


1
8 38
7 5 10 5 8 7 10 20

1
5 5
1 2 3 8 4
3

5
8 38
7 8 19 7 8 7 10 20
4 5
2 10 4 9
4 5
1 2 3 10
8 38
7 5 10 5 8 7 10 20
5 5
1 2 5 8 4
*/
