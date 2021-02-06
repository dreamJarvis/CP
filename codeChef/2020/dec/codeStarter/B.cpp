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

    ll n;
    cin >> n;

    unordered_map<int, int> freq;
    ll arr1[n], arr2[n+1];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
        freq[arr1[i]]++;
    }

    for(int i = 0; i < n+1; i++){
        cin >> arr2[i];
        freq[arr2[i]]++;
    }

    for(auto &i:freq){
        if(i.second%2){
            cout << i.first << endl;
            break;
        }
    }

    return 0;
}
