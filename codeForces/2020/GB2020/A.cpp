#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int area(int a, int b) {
    return ((a * b) / 2);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FIO;

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];


        unordered_map<int, bool> st;

        int k = 1;
        while (k < n) {
            for (int i = 0; i < n - k; i++) {
                if (i + k < n) {
                    st[abs(a[i] - a[i + k])];
                }
            }
            k++;
        }

        cout << st.size() << endl;
    }

    return 0;
}
/*
8
4
1 2 4 5
3
1 3 5
3
2 6 8
2
1 2
1
50
5
3 4 5 6 8
3
1 25 26
6
1 2 4 8 16 32


4
2
3
1
0
5
3
15
*/