#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	n = s.length();

	int freq0(0), freq1(0);
	for (auto i : s) {
		if (i == '0')
			freq0++;
		else
			freq1++;
	}

	int left1[n] = {0};
	int right0[n] = {0};

	// lfet 1
	int count1(0);
	for (int i = 0; i < n; i++) {
		if (s[i] == '1')	count1++;
		left1[i] = count1;
	}

	// right 0
	int count0(0);
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '0')	count0++;
		right0[i] = count0;
	}

	int ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		int tmp(0);
		if (i - 1 >= 0)
			tmp += left1[i - 1];
		if (i + 1 < n)
			tmp += right0[i + 1];
		ans = min(ans, tmp);
	}

	ans = min(freq0, min(freq1, ans));

	cout << ans << "\n";

	return ;
}

signed main() {
	FIO;

	int tc(1);
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		cout << "#tc " << i + 1 << "\t : ";
		solve();
	}

	return 0;
}
/*
6
2
01
3
110
5
10101
5
10011
6
111000
19
1101000010110111010

9
000111110

9
0001111100
*/