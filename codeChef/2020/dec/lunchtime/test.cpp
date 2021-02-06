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
		ll n;
		cin >> n;

		string s, p;
		cin >> s >> p;

		ll count1 = 0, count2 = 0;
		for(int i = 0; i < n; i++){
			if(p[i]=='0')
				count1++;
			else if(p[i] == '1')
				count1--;

			if(s[i] == '0')
				count2++;
			else if(s[i] == '1')
				count2--;
		}


		if(count1 != count2){
			cout << "No" << endl;
			continue;
		}


		bool flag = true;
		ll c = 0;
		for(int i = 0; i < n; i++){
			if(s[i] != p[i]){
				if(s[i] == '0'){
					if(c > 0){
					    c--;
					}
					else{
					    flag = false;
					    break;
					}
				}
				else
					c++;
			}
		}

		if(flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;		

	}

    return 0;
}