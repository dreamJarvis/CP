#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int l, r;
    int l0=0, l1=0, r0=0, r1=0;
    for(int i = 0; i < n; i++){
        cin >> l >> r;
        
        if(l)
            l1++;
        else if(!l)
            l0++;

        if(r)
            r1++;
        else if(!r)
            r0++;
    }

    int count = min(abs(n-l0), abs(n-l1)) + min(abs(n-r0), abs(n-r1));
    cout << count << endl;

    return 0;
}
