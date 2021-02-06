/*
	Largest prime factor
	https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1
*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// tc : sqrt(n)
void primeFact(int n) {
	// log(n)
	while (n % 2 == 0) {
		cout << 2 << " ";
		n /= 2;
	}

	// sqrt(n)
	for (int i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			cout << i << " ";
			n = n / i;
		}
	}

	// to handle the last factor
	if (n > 2)
		cout << n << "\n";

	return ;
}

signed main() {
	primeFact(315);

	return 0;
}