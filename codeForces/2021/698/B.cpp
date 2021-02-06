#include <bits/stdc++.h>
using namespace std;

#define int long long
const unsigned int MOD = 1000000007;

// solution
void solve() {
	int n(0), d(0);
	scanf("%lld %lld", &n, &d);

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%lld", &num);

		bool flag = false;
		if (num >= d * 10) {
			flag = true;
		}
		else {
			while (num >= d) {
				if (num % d == 0) {
					flag = true;
					break;
				}
				num -= 10;
			}
		}

		if (flag)
			printf("%s\n", "YES");
		else
			printf("%s\n", "NO");
	}

	return ;
}

signed main() {
	int tc;
	scanf("%lld", &tc);

	while (tc--) {
		solve();
	};

	return 0;
}
/*
2
3 7
24 25 27
10 7
51 52 53 54 55 56 57 58 59 60

Output
Copy

YES
NO
YES

YES
YES
NO
YES
YES
YES
YES
YES
YES
NO

*/