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

void solve() {
	int n, m;
	cin >> n >> m;

	int totalSum = 0;
	int minSum = 0, maxSum = 0;
	int tempN = n;
	V(int) a(m, 0);
	rep(i, 0, m) {
		cin >> a[i];
	}

	sort(all(a));
	int k = n, i = 0;
	while (k > 0) {
		int temp = a[i];
		if (k >= a[i]) {
			minSum += (temp * (temp + 1) / 2);
			k -= a[i];
		}
		else {
			minSum += (temp * (temp + 1) / 2 - ((temp - k) * ((temp - k) + 1) / 2));
			break;
		}

		i = (i + 1) % m;
	}

	int freq[1002];
	mem0(freq);

	rep(i, 0, m)
	freq[a[i]]++;

	k = n;
	repR(i, 0, 1001) {
		if (k > 0 && freq[i] > 0) {
			if (freq[i] >= k) {
				maxSum += k * i;
				break;
			}

			maxSum += i * freq[i];
			freq[i - 1] += freq[i];
			k -= freq[i];
		}
	}

	cout << maxSum << " " << minSum << endl;

	return ;
}

signed main() {
	FIO;
	int tc = 1;

	while (tc--) {
		solve();
	}

	return 0;
}