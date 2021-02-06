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
	int n, m, l;
	cin >> n >> m >> l;

	int sum = 0;

	vector<vector<int>> arr(3);
	int temp;
	rep(i, 0, n) {
		cin >> temp;
		arr[0].pb(temp);
		sum += temp;
	}

	rep(i, 0, m) {
		cin >> temp;
		arr[1].pb(temp);
		sum += temp;
	}

	rep(i, 0, l) {
		cin >> temp;
		arr[2].pb(temp);
		sum += temp;
	}

	int bucket[3] = {0};
	for (int i : arr[0]) {
		bucket[0] += i;
	}

	for (int i : arr[1]) {
		bucket[1] += i;
	}

	for (int i : arr[2]) {
		bucket[2] += i;
	}

	sort(arr[0].begin(), arr[0].end());
	sort(arr[1].begin(), arr[1].end());
	sort(arr[2].begin(), arr[2].end());
	sort(arr.begin(), arr.end());

	int ans = 0;
	rep(i, 0, 3) {
		amax(ans, (sum - 2 * bucket[i]));
	}

	amax(ans, sum - 2 * (arr[0][0] + arr[1][0]));

	cout << ans << endl;

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
Input
Copy

2 4 1
1 2
6 3 4 5
5

Output
Copy

20

Input
Copy

3 2 2
7 5 4
2 9
7 1

Output
Copy

29
*/