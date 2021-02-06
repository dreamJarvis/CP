#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
	int px, py;
	cin >> px >> py;

	string str;
	cin >> str;

	int n = str.length();
	int qx(0), qy(0);
	int d(0);
	for (int i = 0; i < n; i++) {
		if (str[i] == 'R' && qx < px) {
			qx++;
		}
		else if (str[i] == 'L' && qx > px) {
			qx--;
		}
		else if (str[i] == 'U' && qy < py) {
			qy++;
		}
		else if (str[i] == 'D' && qy > py) {
			qy--;
		}
	}

	if (qx == px && qy == py)
		cout << "YES\n";
	else
		cout << "NO\n";

	return;
}

signed main() {
	FIO;

	int tc(1);
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		// cout << "tc : " << i << "\t";
		solve();
	}

	return 0;
}
/*
6
10 5
RRRRRRRRRRUUUUU
1 1
UDDDRLLL
-3 -5
LDLDLDDDR
1 2
LLLLUU
3 -2
RDULRLLDR
-1 6
RUDURUUUUR

YES
YES
YES
NO
YES
NO

*/