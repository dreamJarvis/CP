#include <bits/stdc++.h>
using namespace std;

#define int 			long long
#define ld 				long double
#define f 				first
#define s 				second
#define pb 				push_back
#define ppb 			pop_back
#define pf 				pop_front
#define mp 				make_pair
#define mem1 			memset(a, -1, sizeof(a))
#define mem0			memset(a, 0, sizeof(a))
#define all(x)      	(x).begin(),(x).end()
#define uniq(v)     	(v).erase(unique(all(v)),(v).end())
#define sz(x)       	(int)((x).size())
#define pll 			pair<int, int>
#define V(a) 			vector<a>
#define trav(a, b)		for(auto &a:b)
#define rep(i, a, b) 	for(int i=a;i<b;i++)
#define repR(i, a, b) 	for(int i=b-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

// solution
void solve() {
	int n;
	cin >> n;

	V(V(int)) lines(n);
	map<int, int> mp;

	rep(i, 0, n){
		int m;
		cin >> m;

		rep(j, 0, m){
			int ant;
			cin >> ant;
			lines[i].pb(ant);
			mp[abs(ant)]++;
		}
	}

	int ans = 0;
	trav(ant, mp){
		ans += (ant.s > 1);
	}

	trav(line, lines){
		V(int) neg, pos;
		trav(ant, line){
			if(ant < 0)
				neg.pb(ant);
			else
				pos.pb(ant);
		}

		reverse(all(pos));

		while(true){
			int closest;
			if(neg.empty() && pos.empty()){
				break;
			}else if(neg.empty()){
				closest = pos.back();
			}else if(pos.empty()){
				closest = neg.back();
			}else{
				closest = (abs(neg.back()) < pos.back()) ? neg.back() : pos.back();
			}

			// it means the closest on is on the neg side
			if(closest < 0){
				if(mp[abs(closest)] > 1){
					ans += sz(neg)-1;
				}
				else{
					ans += sz(pos);
				}
			}else{
				if(mp[abs(closest)] > 1){
					ans += sz(pos)-1;
				}
				else{
					ans += sz(neg);
				}
			}

			if(closest > 0){
				pos.ppb();
			}else{
				neg.ppb();
			}
		}
	}

	cout << ans << endl;

	return;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO;

	int tc(1);
	cin >> tc;

	while (tc--) {
		solve();
	}

	return 0;
}
/*
1
2
2 -2 1
1 2

1
3
2 -2 1
1 2
2 1 2
*/
