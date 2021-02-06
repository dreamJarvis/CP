#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld 	long double
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const long long INF = 1e18;
const int32_t MOD = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

// solution starts here
void solve() {
	string heading;
	getline(cin, heading);

	string text;
	getline(cin, text);

	int lc[28], uc[28];
	memset(uc, 0, sizeof(uc));
	memset(lc, 0, sizeof(lc));

	int nHeading = heading.length();
	int nText = text.length();

	// heading freq
	for (int i = 0; i < nHeading; i++) {
		if (heading[i] >= 'a' && heading[i] <= 'z')
			lc[heading[i] - 'a']++;
		else if (heading[i] >= 'A' && heading[i] <= 'Z')
			uc[heading[i] - 'A']++;
	}

	// text
	for (int i = 0; i < nText; i++) {
		if (text[i] != ' ') {
			if (text[i] >= 'a' && text[i] <= 'z') {
				if (lc[text[i] - 'a'] <= 0) {
					cout << "NO" << "\n";
					return ;
				} else
					lc[text[i] - 'a']--;
			}
			else if (text[i] >= 'A' && text[i] <= 'Z') {
				if (uc[text[i] - 'A'] <= 0) {
					cout << "NO" << "\n";
					return ;
				} else
					uc[text[i] - 'A']--;
			}
		}
	}

	cout << "YES" << "\n";

	return ;
}

signed main() {
	FIO;
	int tc = 1;
	// cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
