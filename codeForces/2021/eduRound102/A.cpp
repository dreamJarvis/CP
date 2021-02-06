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
	int n = 1, d;
	cin >> n >> d;

	int c(0);
	int a[n];
	rep(i, 0, n) {
		cin >> a[i];

		if (a[i] <= d)
			c++;
	}

	if (c == n) {
		cout << "Yes" << endl;
		return ;
	}

	int aj = M, ak = M;
	rep(i, 0, n) {
		if (a[i] < aj) {
			ak = aj;
			aj = a[i];
		}
		else if (a[i] < ak) {
			ak = a[i];
		}
	}

	if (aj + ak <= d) {
		cout << "Yes" << endl;
		return ;
	}

	cout << "No" << endl;

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
3
5 3
2 3 2 5 4
3 4
2 4 4
5 4
2 1 5 3 6
*/