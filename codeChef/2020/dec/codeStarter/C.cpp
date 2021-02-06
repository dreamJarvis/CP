#include <bits/stdc++.h>
using namespace std;

// #define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FIO;

    int n, m, a;
    cin >> n >> m >> a;

    int x = max(n, m);
    int y = min(n, m);

    int count = 0;
    if(a >= x){
        count = 1;
    }
    else {
        int c1 = 0, c2 = 0;
        c1 += (x/a);
        if(x/a && x%a)  c1++;

        if(y >= a){
            y -= a;

            c2 += (y/a)*c1;
            if(y%a)
                c2 += c1;
        }

        count = c1+c2;
    }

    cout << count << endl;

    return 0;
}
