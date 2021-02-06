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
bool isPalindrome(string str) {
	int s = 0, e = str.length() - 1;
	while (s <= e) {
		if (str[s] != str[e])	return false;
		s++;
		e--;
	}
	return true;
}

void solve() {
	// int n = 1;
	// cin >> n;

	// int a[n];
	// rep(i, 0, n) {
	// 	cin >> a[i];
	// }

	string str;
	cin >> str;

	int freq[27] = {0};
	mem0(freq);

	for (auto i : str)
		freq[i - 'a']++;

	int oddCount(0);
	rep(i, 0, 27)
	if (freq[i] > 0 && freq[i] % 2)
		oddCount++;

	if (oddCount <= 1 || oddCount % 2)
		cout << "First" << endl;
	else if (oddCount % 2 == 0)
		cout << "Second" << endl;

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
Copy

aba

Output
Copy

First

Input
Copy

abca

Output
Copy

Second
*/