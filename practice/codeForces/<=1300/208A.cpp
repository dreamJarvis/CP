#include <bits/stdc++.h>
using namespace std;

#define M1 1e9
#define int long long
#define ld long double
#define f first
#define s second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define pll pair<int, int>
#define V(a) vector<a>
#define rep(i, a, b) for(int i=a;i<b;i++)
#define repR(i, a, b) for(int i=b-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int lcm(int a, int b) { return ((a * b) / __gcd(a, b));}

void solve() {
	string str;
	cin >> str;

	string originalStr = "";
	int n = str.length();
	for (int i = 0; i < n; i += 3) {
		string tempStr = "";
		while (i < n && str.substr(i, 3) != "WUB") {
			tempStr += str[i];
			i++;
		}
		originalStr += tempStr + " ";
	}

	cout << originalStr << endl;

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
/*
WUBWUBABCWUB

Output
Copy

ABC

Input
Copy

WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB

Output
Copy

WE ARE THE CHAMPIONS MY FRIEND
*/