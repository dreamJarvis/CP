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

    ll n;
    cin >> n;

    ll a[n];
    ll minNum = INT_MAX, index;
    ll temp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] < minNum){
            minNum = a[i];
            index = i+1;
        }
    }

    for(int i=0; i<n; i++){
        if(a[i] == minNum && i+1 != index){
            cout << "Still Rozdil" << endl;
            return 0;
        }
    }

    cout << index << endl;

    return 0;
}
