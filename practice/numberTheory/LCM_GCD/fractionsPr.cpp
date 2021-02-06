#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int gcd(int a, int b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

void fractionsPr(int num[], int den[], int n) {
	int numPr(num[0]), denPr(den[0]);
	for (int i = 1; i < n; i++) {
		numPr *= num[i];
		denPr *= den[i];
	}

	int cf = gcd(numPr, denPr);

	numPr = numPr / cf;
	denPr = denPr / cf;

	cout << numPr << "/" << denPr << "\n";

	return;
}

signed main() {
	FIO;

	// int num[] = {1, 2, 5};
	// int den[] = {2, 1, 6};

	int num[] = {1, 2, 5, 9};
	int den[] = {2, 1, 6, 27};

	int n = sizeof(num) / sizeof(num[0]);

	fractionsPr(num, den, n);

	return 0;
}
