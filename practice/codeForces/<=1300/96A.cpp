#include <bits/stdc++.h>
using namespace std;

#define M1 1e9
#define int long long
#define ld long double
#define f first
#define s second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define pll pair<int, int>
#define V(a) vector<a>
#define rep(i, a, b) for(int i=a;i<b;i++)
#define repR(i, a, b) for(int i=b-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int lcm(int a, int b) { return ((a * b) / __gcd(a, b));}

void solve() {
	string str;
	cin >> str;

	int n = str.length();
	for (int i = 0; i < n - 1; i++) {
		int j = i;
		while (str[j] == str[j + 1]) {
			j++;
		}

		if (abs(j - i + 1) == 7) {
			cout << "YES" << endl;
			return ;
		}
	}

	cout << "NO" << endl;
	return ;
}

signed main() {
	FIO;
	int tc = 1;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
001001

Output
Copy

NO

Input
Copy

1000000001

Output
Copy

YES

00100110111111101
YES

11110111011101
NO
*/