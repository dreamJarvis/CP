#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	ll tc;
	cin >> tc;

	while (tc--) {
		string str;
		cin >> str;

		ll n = str.length();
		if (n % 2) {
			cout << -1 << endl;
			continue;
		}

		ll count0 = 0, count1 = 0;
		for(int i = 0; i < n; i++){
			if(str[i] == '1')
				count1++;
			else
				count0++;
		}

        if(count0 == 0 || count1 == 0)
            cout << -1 << endl;
        else
            cout << abs(count1-count0)/2 << endl;
	}

	return 0;
}
