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
int fact(int n) {
	if (n == 0 || n == 1)return 1;
	return (n * fact(n - 1));
}

int nCr(int n, int r) {
	return (fact(n) / (fact(n - r) * fact(r)));
}

// solution starts here
void solve() {
	int n = 1;
	cin >> n;

	int maxNum = -1, minNum = M;
	int a[n];
	unordered_map<int, int> freq;
	rep(i, 0, n) {
		cin >> a[i];
		maxNum = max(maxNum, a[i]);
		minNum = min(minNum, a[i]);
		freq[a[i]]++;
	}

	int maxDiff = maxNum - minNum;
	int maxPos(0);

	if (maxDiff == 0) {
		for (auto i : freq) {
			int b = i.second;
			maxPos += (b * (b - 1)) / 2;
		}
	}
	else {
		for (auto i : freq) {
			int a = i.first;
			int b = i.second;
			int diff = (a + maxDiff);
			if ((diff != a) && freq.count(diff) && freq[diff] > 0) {
				maxPos += b * freq[diff];
			}
		}
	}

	cout << maxDiff << " " << maxPos << endl;

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
2
1 2

Output
Copy

1 1

Input
Copy

3
1 4 5

Output
Copy

4 1

Input
Copy

5
3 1 2 3 1

Output
Copy

2 4

/////////
2
1 1

Output

0 4

Answer

0 1


*/