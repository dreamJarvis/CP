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

int util(int a[], int n, int target, int k, unordered_map<string, int> &dp) {
	string key = to_string(n) + "_" + to_string(target);
	if (target >= k) {
		return target;
	}

	if (n < 0)
		return INT_MAX;

	if (dp.count(key))
		return dp[key];

	dp[key] = min(
	              util(a, n - 1, target + a[n], k, dp),
	              util(a, n - 1, target, k, dp)
	          );

	return dp[key];
}

// minimum sum greater than K
int minSum(int a[], int n, int k) {
	unordered_map<string, int> dp;
	return util(a, n - 1, 0, k, dp);
}

void solve() {
	int n(0), k(0);
	cin >> n >> k;

	int a[n], b[n];
	rep(i, 0, n) {
		cin >> a[i];
	}

	sort(a, a + n, greater<int>());

	// rep(i, 0, n)
	// cout << a[i] << " ";
	// cout << endl;

	int suffixSum = a[0];
	rep(i, 1, n) {
		suffixSum += a[i];
		if (suffixSum >= 2 * k && ((suffixSum - minSum(a, i, k)) >= k)) {
			cout << i + 1 << endl;
			return;
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
		cout << "case #" << i + 1 << " : ";
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
1 2 3 8 4
*/
