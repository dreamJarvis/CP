#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	if (a == b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
