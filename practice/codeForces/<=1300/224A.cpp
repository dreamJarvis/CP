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

    ll x, y, z;
    cin >> x >> y >> z;

    ll c = sqrt((y*z)/x);
    ll a = z/c;
    ll b = y/c;

    ll sumOfEdges = 4*a + 4*b + 4*c;

    cout << sumOfEdges << endl;

    return 0;
}
