#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// tc :  O(n*log(log(n)))
void sieve(int n) {
	bool isPrime[n + 1];
	memset(isPrime, 1, sizeof(isPrime));

	for (int i = 2; i * i <= n; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {
			cout << i << " ";
		}
	}
	cout << "\n";

	return ;
}

signed main() {
	sieve(6);

	return 0;
}