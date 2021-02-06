#include <bits/stdc++.h>
using namespace std;

#define int 			long long
#define ld 				long double
#define f 				first
#define s 				second
#define pb 				push_back
#define ppb 			pop_back
#define mp 				make_pair
#define mem1(a) 		memset(a, -1, sizeof(a))
#define mem0(a)			memset(a, 0, sizeof(a))
#define all(x)      	(x).begin(),(x).end()
#define uniq(v)     	(v).erase(unique(all(v)),(v).end())
#define sz(x)       	(int)((x).size())
#define pll 			pair<int, int>
#define V(a) 			vector<a>
#define rep(i, a, b) 	for(int i=a;i<b;i++)
#define repR(i, a, b) 	for(int i=b-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 0;

int lcm(int a, int b) { return ((a * b) / __gcd(a, b));}

// solution starts here
bool prime[1000001];
void SieveOfEratosthenes() {
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p < 1000001; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i < 1000001; i += p)
				prime[i] = false;
		}
	}
}

signed main() {
	FIO;
	int tc = 1;
	cin >> tc;

	SieveOfEratosthenes();

	int a[1000001];
	mem0(a);

	int count(0);
	for (int i = 3; i < 1000001 ; i++) {
		if ((i - 2 > 1) && prime[i] && prime[i - 2]) {
			count++;
		}
		a[i] = count;
	}

	int n;
	while (tc--) {
		cin >> n;
		cout << a[n] << endl;
	}

	return 0;
}