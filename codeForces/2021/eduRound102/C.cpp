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
	int n, k;
	cin >> n >> k;

	int a[k];
	rep(i, 0, k) {
		a[i] = i + 1;
	}

	// rep(i, 0, k) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	int toReverse = n - k + 1;
	int si = k - toReverse;
	int ei = k - 1;
	for (int i = 0; i < toReverse / 2; i++) {
		int l = si + i, r = ei - i;
		swap(a[l], a[r]);
	}

	rep(i, 0, k) {
		cout << a[i] << " ";
	}
	cout << endl;

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
4
1 1
2 2
3 2
4 3

Output
Copy

1
1 2
2 1
1 3 2

*/