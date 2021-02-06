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

	ll tc;
	cin >> tc;

	while(tc--){
		string str;
		cin >> str;


		ll n = str.size();
		ll s = n/3, p=0;	
		
		ll a[27];
		memset(a, 0, sizeof(a));

		for(auto &i:str)
			a[i-'a']++;

		for(int i = 0; i < 27; i++){
			p += a[i]/2;
		}

		cout << min(p, s) << endl;
	}

    return 0;
}