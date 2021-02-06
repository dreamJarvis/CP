#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// void solve() {

// }

signed main() {
	FIO;

	int n, m;
	cin >> n >> m;

	int count = 0;
	for (int i = 0; i <= 1000; i++) {
		for (int j = 0; j <= 1000; j++) {
			int x = i * i + j;
			int y = i + j * j;

			if (x == n && y == m) {
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}
/*
9 3

Output
Copy

1

Input
Copy

14 28

Output
Copy

1

Input
Copy

4 20

Output
Copy

0
*/