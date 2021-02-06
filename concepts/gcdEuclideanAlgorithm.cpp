#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// euclidean algorithm
// tc : O(log(min(a, b)))
ll gcd(ll a, ll b){
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

// Driver function
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;
	ll a, b;
	cin >> a >> b;

	a = max(a, b);
	b = min(a, b);

	cout << gcd(a, b) << endl;
	return 0;
}
