#include <iostream>
using namespace std;

typedef long long int lli;

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
		int n, k;
		cin >> n >> k;

		int size = n * k;
		int arr[size];

		for (int i = 0; i < size; i++) {
			cin >> arr[i];
		}

		lli sum = 0;
		if (n % 2 == 0) {
			int m = n / 2 + 1;
			int t = size - m;

			for (int i = k; i > 0; i--) {
				sum += arr[t];
				// cout << arr[t] << "_" << sum;
				t = t - m;
			}
			// cout << " : " << sum << endl;
		}
		else {
			int m = n - n / 2;
			int t = size - m;

			for (int i = k; i > 0; i--) {
				sum += arr[t];
				t = t - m;
			}
			// cout << " : " << sum << endl;
		}

		cout << sum << endl;

	}
	return 0;

}