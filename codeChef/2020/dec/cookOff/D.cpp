#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// gcd
ll gcd(ll a, ll b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

// factorial < n
ll factLessN(ll g, ll n){
	ll maxFact = 0;
	for(ll i = 1; i*i <= g; i++){
		if(g%i==0){
			if(i <= n)
				maxFact = max(maxFact, i);
			if(g/i <= n)
				maxFact = max(maxFact, g/i);
		}
	}

	return maxFact;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	ll t, n, m;
	cin >> t;

	while(t--){
		cin >> n >> m;

		ll g = 0, temp;
		for(int i = 0; i < m; i++){
			cin >> temp;
			g = gcd(g, temp);
		}

		if(g > n){
			ll fact = factLessN(g, n);
			g = fact;
		}

		cout << (n-g) << endl;
	}

    return 0;
}
/*
Example Input:
5
4 1
5
6 2
2 4
1 4
7 16 8 29
1000000000 1
998244353
1 1
20201220

Example Output:
3
4
0
1755647
0

*/
