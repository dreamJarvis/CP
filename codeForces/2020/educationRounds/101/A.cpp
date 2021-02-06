#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

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


		ll n = str.size();
		if ((n % 2) || str[0] == ')' || str[n - 1] == '(')
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}

	return 0;
}