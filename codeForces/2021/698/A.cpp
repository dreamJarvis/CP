#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
	int n;
	scanf("%lld", &n);

	unordered_map<int, int> freq;

	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
		freq[a[i]]++;
	}

	int maxFreq(1);
	for (auto i : freq) {
		maxFreq = max(maxFreq, i.second);
	}

	printf("%lld\n", maxFreq);
	return ;
}

signed main() {
	int tc;
	scanf("%lld", &tc);

	while (tc--) solve();

	return 0;
}