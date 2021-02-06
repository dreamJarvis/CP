#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;
	cin >> tc;

	while (tc--) {
		int n;
		cin >> n;

		string red = "";
		string blue = "";

		cin >> red;
		cin >> blue;

		int c1 = 0, c2 = 0;
		for (int i = 0; i < n; i++) {
			if (red[i] > blue[i])
				c1++;
			else if (red[i] < blue[i])
				c2++;
		}

		if (c1 > c2)
			cout << "RED" << endl;
		else if (c1 < c2)
			cout << "BLUE" << endl;
		else
			cout << "EQUAL" << endl;

	}

	return 0;
}