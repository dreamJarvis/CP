// https://www.geeksforgeeks.org/perfect-number/
/*
	A number is a perfect number if is equal to sum of its proper divisors, that is, sum of its positive divisors excluding the number itself. Write a function to check if a given number is perfect or not.
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool perfectNumber(ll n) {
	ll sum = 1;
	for (ll i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			if (i * i == n)
				sum += i;
			else
				sum += (i + n / i);
		}
	}

	if (sum == n && n != 1)
		return true;
	return false;
}

int main() {
	FIO;

	cout << perfectNumber(10) << endl;

	return 0;
}