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

    string str;
    cin >> str;

    ll n = str.length();
    bool flag = true;
    ll i = 0;
    while (i < n) {
        if (str.substr(i, 3) == "144") {
            i += 3;
        }
        else if (str.substr(i, 2) == "14") {
            i += 2;
        }
        else if (str[i] == '1') {
            i++;
        }
        else {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
/*
Copy
114114
outputCopy
YES
inputCopy
1111
outputCopy
YES
inputCopy
441231
outputCopy
NO

*/