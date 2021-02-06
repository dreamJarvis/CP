#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	FIO;

    ll n, k;
    cin >> n >> k;

    while(k--){
        ll ln = n%10;
        if(ln){
            n--;
        }
        else if(ln==0){
            n /= 10;
        }
    }

    cout << n << endl;

    return 0;
}
