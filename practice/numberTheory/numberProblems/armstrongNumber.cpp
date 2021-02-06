#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

string isArmstrong(int n) {
	string num = to_string(n);
	int exp = num.length();

	int totalSum(0);
	for (auto i : num) {
		totalSum += pow((i - '0'), exp);
	}

	return totalSum == n ? "Yes" : "No";
}

// Driver function
signed main() {
	FIO;

	cout << isArmstrong(370) << endl;

	return 0;
}