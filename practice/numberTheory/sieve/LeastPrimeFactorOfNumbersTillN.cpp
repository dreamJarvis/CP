/*
	Least prime factor of numbers till n
	https://www.geeksforgeeks.org/least-prime-factor-of-numbers-till-n/
*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define INF INT_MAX

void sieve(int n, vector<int> &fact) {
	for (int i = 2; i * i <= n; i++) {
		if (fact[i] == i) {
			for (int j = i * i; j <= n; j += i) {
				if (fact[j] == j)
					fact[j] = i;
			}
		}
	}

	return ;
}

// Time Complexity: O(nlog(n))
// Auxiliary Space: O(n)
vector<int> leastPrimeFactor(int n) {
	vector<int> fact(n + 2);
	fact[0] = 0;
	fact[1] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = i;
	}

	sieve(n + 1, fact);

	vector<int> ans;
	if (n == 1) {
		return vector<int>({1});
	}

	for (int i = 1; i <= n; i++) {
		ans.push_back(fact[i]);
	}

	return ans;
}

signed main() {
	for (auto i : leastPrimeFactor(12))
		cout << i << " ";
	cout << "\n";

	return 0;
}