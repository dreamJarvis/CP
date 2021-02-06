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
#define repR(i, a, b) 	for(int i=b-1;i>=a;i--)
#define rep(i, a, b) 	for(int i=a;i<b;i++)
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
	int n, m;
	cin >> n >> m;

	V(V(char)) matrix(n, V(char)(m));
	rep(i, 0, n) {
		rep(j, 0, m) {
			cin >> matrix[i][j];
		}
	}

	// filling the 1st row
	rep(i, 0, n) {
		rep(j, 0, m) {
			if (matrix[i][j] != '-') {
				if (i % 2 == 0) {
					if (j % 2 == 0)
						matrix[i][j] = 'B';
					else
						matrix[i][j] = 'W';
				}
				else if (i % 2) {
					if (j % 2) {
						matrix[i][j] = 'B';
					}
					else {
						matrix[i][j] = 'W';
					}
				}
			}
		}
	}

	rep(i, 0, n) {
		rep(j, 0, m) {
			cout << matrix[i][j] << "";
		}
		cout << endl;
	}


	return ;
}

// Driver function
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
Input
Copy

1 1
.

Output
Copy

B

Input
Copy

2 2
..
..

Output
Copy

BW
WB

Input
Copy

3 3
.-.
---
--.

Output
Copy

B-B
---
--B
*/