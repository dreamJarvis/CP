#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool isPalindrome(string str) {
	ll s = 0, e = str.length() - 1;
	while (s <= e) {
		if (str[s] != str[e])
			return false;
		s++;
		e--;
	}

	return true;
}

// Driver function
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	ll tc;
	cin >> tc;

	while (tc--) {
		string str;
		cin >> str;


		ll count = 0;
		ll n = str.length();

		for (int i = 1; i < n; i++) {
			if ((str[i - 1] == str[i]) || (i >= 2 && (str[i - 2] == str[i]))) {
				str[i] = '1';
				count++;
			}
		}

		cout << count << endl;

	}

	return 0;
}