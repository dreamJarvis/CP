#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	ll n, m;
	cin >> n >> m;

	ll maxWait = -1, maxWaitIndex = -1;
	ll temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp > m){
			ll t = temp/m;
			if(temp%m == 0)
				t--;

			if(t == maxWait && (i+1) > maxWaitIndex){
				maxWaitIndex = (i+1);
			}
			else if(t > maxWait){
				maxWait = t;
				maxWaitIndex = i+1;
			}
		}
	}

	if(maxWaitIndex != -1){
		cout << maxWaitIndex << endl;
	}
	else
		cout << n << endl;

	return 0;
}
/*
5 2
1 3 1 4 2

Output
Copy

4

Input
Copy

6 4
1 1 2 2 3 3

Output
Copy

6

50 1
4 3 9 7 6 8 3 7 10 9 8 8 10 2 9 3 2 4 4 10 4 6 8 10 9 9 4 2 8 9 4 4 9 5 1 5 2 4 4 9 10 2 5 10 7 2 8 6 8 1

7 3
6 1 5 4 2 3 1
*/
