#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int n, m;
	cin >> n >> m;

	int A[n], B[m];
	int sumA = 0, sumB = 0;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		sumA += A[i];
	}
	for (int j = 0; j < m; j++) {
		cin >> B[j];
		sumB += B[j];
	}

	sort(A, A + n);
	sort(B, B + m, greater<int>());

	if (sumA > sumB) {
		cout << 0 << endl;
		return ;
	}

	int i = 0;
	while (i < n && i < m && sumA <= sumB) {
		sumA -= A[i];
		sumB -= B[i];

		sumA += B[i];
		sumB += A[i];

		i++;
	}

	if (sumA > sumB)
		cout << i << endl;
	else
		cout << -1 << endl;

	return;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	int tc;
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}