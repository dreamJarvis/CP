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

int lcm(int a, int b) { return ((a * b) / __gcd(a, b));}

// solution starts here
void solve() {
	int n = 1;
	cin >> n;

	int a[n];
	rep(i, 0, n) {
		cin >> a[i];
	}

	unordered_map<int, bool> isValid;
	unordered_map<int, int> visited;
	unordered_map<int, int> ap;

	// storing the 1st differences : r
	rep(i, 0, n) {
		if (visited.count(a[i]) && !ap.count(a[i])) {
			int d = i - visited[a[i]];
			ap[a[i]] = d;
		}
		visited[a[i]] = i;
		isValid[a[i]] = true;
	}

	visited.clear();
	rep(i, 0, n) {
		if (visited.count(a[i])) {
			int diff = i - visited[a[i]];
			if (ap[a[i]] != diff) {
				isValid[a[i]] = false;
			}
		}

		visited[a[i]] = i;
	}

	visited.clear();
	sort(a, a + n);

	int ts(0);
	for (auto i : isValid)
		if (i.second)
			ts++;
	cout << ts << endl;

	rep(i, 0, n) {
		if (!visited.count(a[i])) {
			if (isValid[a[i]]) {
				if (ap.count(a[i]))
					cout << a[i] << " " << ap[a[i]] << endl;
				else
					cout << a[i] << " " << 0 << endl;
			}
		}

		visited[a[i]] = i;
	}

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
