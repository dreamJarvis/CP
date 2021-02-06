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

	ll n;
	cin >> n;

	unordered_map<string, int> freq;
	string temp;
	for (ll i = 0; i < n; i++) {
		cin >> temp;
		freq[temp]++;
	}

	ll maxFreq = -1;
	string winTeam = "";
	for (auto &i : freq) {
		string team = i.first;
		ll f = i.second;

		if (maxFreq < f) {
			maxFreq = f;
			winTeam = team;
		}
	}

	cout << winTeam << endl;

	return 0;
}
