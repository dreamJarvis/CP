#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


//// solution
// void solve() {
// 	int a, b, k;
// 	cin >> a >> b >> k;

// 	unordered_map<int, int> freqBoys;
// 	unordered_map<int, int> freqGirls;
// 	int boys[k];
// 	for (int i = 0; i < k; i++) {
// 		cin >> boys[i];
// 		freqBoys[boys[i]]++;
// 	}

// 	int girls[k];
// 	for (int i = 0; i < k; i++) {
// 		cin >> girls[i];
// 		freqGirls[girls[i]]++;
// 	}


// 	int totalPairs = 0;
// 	for (int i = 0; i < k; i++) {
// 		int minNum = 0;
// 		if (freqBoys[boys[i]] >= 0 && freqGirls[girls[i]] >= 0) {
// 			int left = k - i - 1;

// 			int x = freqBoys[boys[i]] - 1;
// 			int y = freqGirls[girls[i]] - 1;

// 			minNum = left - (x + y);

// 			freqBoys[boys[i]]--;
// 			freqGirls[girls[i]]--;
// 		}
// 		totalPairs += minNum;
// 	}

// 	cout << totalPairs << endl;
// 	return ;
// }

void solve() {
	int a, b, k;
	cin >> a >> b >> k;

	int cntb[a + 1] = {0};
	int cntg[b + 1] = {0};
	memset(cntb, 0, sizeof(cntb));
	memset(cntg, 0, sizeof(cntg));

	int x;
	for (int i = 0 ; i < k; i++) {
		cin >> x;
		cntb[x]++;
	}

	for (int i = 0 ; i < k; i++) {
		cin >> x;
		cntg[x]++;
	}

	int S(0);
	for (int i = 1; i <= a; i++) {
		S += cntb[i];
	}

	int ans(0);
	for (int i = 1; i <= a; i++) {
		ans += (cntb[i] * (S - cntb[i]));
	}

	ans /= 2;

	for (int i = 1; i <= b; i++) {
		ans -= ((cntg[i] * (cntg[i] - 1)) / 2);
	}

	cout << ans << endl;

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
3 4 4
1 1 2 3
2 3 2 4
1 1 1
1
1
2 2 4
1 1 2 2
1 2 1 2
*/