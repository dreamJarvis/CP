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

	set<pair<int, int>> st;
	ll temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp > m)
			st.insert({(1 + m*(temp/m-1) + i), i+1});
	}


	if(st.size()){
		auto it = st.end();
		it--;
		cout << (*it).second << endl;
	}
	else
		cout << n << endl;

    cout << "asd" << endl;
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

9 3
9 5 2 3 7 1 8 4 6

*/
