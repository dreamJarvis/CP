// editorial : https://discuss.codechef.com/t/uwcoi21c-organisation-editorial/82417
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007


int main() {
	FIO;
	ll t, n, k, i, j;
	pair<ll, ll> p, p2;
	set<pair<ll, ll>> s;
	set<pair<ll, ll>> :: iterator it;

	cin >> t;
	while (t--) {
		cin >> n >> k;

		for (i = 0; i <= n; i++) {
			cin >> j;
			s.insert({j, i});
		}

		while (s.size()) {
			if (s.size() == 1) {
				p = *(s.begin());
				cout << p.second << " " << k << " 0 0\n";
				s.erase(p);

				if (p.first > k)
					s.insert({p.first - k, p.second});
				else
					return 0;
			}
			else {
				p = *(s.begin());
				it = s.end();
				it--;
				p2 = *(it);

				cout << p.second << " " << p.first << " ";
				cout << p2.second << " " << k - p.first << "\n";

				s.erase(p);
				s.erase(p2);

				if (p2.first > k - p.first)
					s.insert({p2.first - k + p.first, p2.second});
			}
		}
	}

	return 0;
}
