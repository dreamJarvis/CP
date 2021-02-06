#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll arr[n+1];
    ll item;
    for(ll i = 1; i <= n; i++){
        cin >> item;
        arr[item] = i;
    }

    ll a=0, b=0;

    ll q;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> item;

        a += arr[item];
        b += (n-arr[item]+1);
    }

    cout << a << " " << b << endl;

    return 0;
}
