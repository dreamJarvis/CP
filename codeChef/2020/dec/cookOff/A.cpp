#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll tc;
	cin >> tc;

	while (tc--) {
		ll n;		cin >> n;

		string str;
		cin >> str;

		ll td = 120;
		float pass = 75.00;

		int tp = 0;
		for (int i = 0; i < n; i++)
			if (str[i] == '1')
				tp++;


		int ta = n - 1 - tp;
		int cp = td - n + tp;
		float currPer = ((float)cp / td) * 100;

		if (currPer >= pass)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
