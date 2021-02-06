// given an number k, find k's largest factor i.e. less than n
#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

// tc : O(sqrt(k))
ll findFactor(ll k, ll n){
    ll maxFact = 0;
    for(ll i = 1; i*i <= k; i++){
        if(k%i == 0){
            if(i <= n)
                maxFact = max(maxFact, i);
            else if(k/i <= n)
                maxFact = max(maxFact, k/i);
        }
    }

    return maxFact;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    FIO;

    ll k, n;
    cin >> k >> n;

    cout << findFactor(k, n) << endl;

    return 0;
}
