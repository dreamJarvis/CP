#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// tc : O(n*log(log(n)))
// to find primes [0... sqrt(n)]
void simpleSieve(int limit, vector<int> &prime) {
	bool mark[limit + 1];
	memset(mark, true, sizeof(mark));

	for (int i = 2; i * i < limit; i++) {
		if (mark[i]) {
			for (int j = i * i; j < limit; j += i) {
				mark[j] = false;
			}
		}
	}

	for (int i = 2; i < limit; i++) {
		if (mark[i]) {
			prime.push_back(i);
			cout << i << " ";
		}
	}
}

void segmentedSieve(int n) {
	/* compute all tehe primes smaller than or equal to square root of n,
	 using simple sieve */
	int limit = floor(sqrt(n)) + 1;
	vector<int> prime;
	simpleSieve(limit, prime);

	/*divide the rnage [0..n-1] in smaller different segments.
	we have chosen segment size = sqrt(n)*/
	int low = limit;
	int high = 2 * limit;

	/* marking primes in every segment, based on the foundation primes
	found in the first segment i.e sqrt(n)*/
	while (low < n) {
		if (high >= n)
			high = n;

		bool mark[limit + 1];
		memset(mark, true, sizeof(mark));

		/* find the remaining factors of the primes stored in prime arr*/
		for (int i = 0; i < prime.size(); i++) {

			// finding the first factor of prime[i]
			int loLim = floor(low / prime[i]) * prime[i];
			if (loLim < low)
				loLim += prime[i];

			// we are mapping mark[0, n-1] --> [low, high]
			for (int j = loLim; j < high; j += prime[i]) {
				mark[j - low] = false;
			}
		}

		for (int i = low; i < high; i++) {
			if (mark[i - low])
				cout << i << " ";
		}

		// moving to the next segment
		low += limit;
		high += limit;
	}
}

signed main() {
	int n = 100000;

	segmentedSieve(n);

	return 0;
}