/*
	https://www.geeksforgeeks.org/find-divisors-natural-number-set-1/
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// to print all divisor's
// tc : sqrt(n)
void findAllDivisors(ll n) {
	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i * i == n)
				cout << i << " ";
			else
				cout << i << " " << n / i << " ";
		}
	}
	cout << endl;
	return ;
}

// print all divisor's in sorted order
// tc : sqrt(n)
void printInSortedOrder(ll n) {
	vector<ll> a;
	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i * i == n) {
				cout << i << " ";
			}
			else {
				cout << i << " ";
				a.push_back(n / i);
			}
		}
	}

	reverse(a.begin(), a.end());
	for (auto i : a)
		cout << i << " ";
	cout << endl;

	return;
}

int main() {
	FIO;

	findAllDivisors(10);
	printInSortedOrder(10);

	return 0;
}