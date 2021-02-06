#include <iostream>
using namespace std;

// Driver function
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
		int n, c0, c1, h;
		cin >> n >> c0 >> c1 >> h;

		string str;
		cin >> str;

		int count1 = 0, count0 = 0;
		int p1 = 0;
		for (int i = 0; i < n; i++) {
			if (str[i] == '0') {
				p1 += c0;
				count0++;
			}
			else if (str[i] == '1') {
				p1 += c1;
				count1++;
			}
		}

		int p2 = n * c0 + (n - count0) * h;
		int p3 = n * c1 + (n - count1) * h;


		int totalPrice = min(p1, min(p2, p3));

		cout << totalPrice << endl;
	}

	return 0;
}
