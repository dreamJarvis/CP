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

    ll n, k;
    cin >> n >> k;

    if(k <= (n+1)/2){
        cout << (k*2-1) << endl;
    }
    else{
        cout << (k - (n+1)/2 )*2 << endl;
    }

    return 0;
}
