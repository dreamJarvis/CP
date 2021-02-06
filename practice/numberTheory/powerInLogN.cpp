#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int powLog(int x, int y) {
	if (y == 0)	return 1;

	int temp = powLog(x, y / 2);

	if (y % 2 == 0) {
		// printf("even --> %lld : %lld * %lld \n", y, temp, temp);
		return (temp * temp);
	}

	// printf("odd --> %lld : %lld * %lld * %lld \n", y, x, temp, temp);
	return (x * temp * temp);

}

signed main() {
	FIO;

	cout << powLog(2, 5) << endl;

	return 0;
}