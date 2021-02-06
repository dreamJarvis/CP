#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int b[n];
        for(int i = 0; i < n; i++)
            cin >> b[i];


        int mina = INT_MAX;
        for(int i = 0; i < n; i++)
            mina = min(mina, a[i]);

        int minb = INT_MAX;
        for(int i = 0; i < n; i++)
            minb = min(minb, b[i]);


        long long int count = 0, rev = 0;
        for(int i = 0; i < n; i++){
            count += (a[i]-mina) + (b[i]-minb);
            if(a[i] > mina && b[i] > minb){
                count -= min(a[i]-mina, b[i]-minb);
            }
        }

        cout << (count-rev) << endl;
    }

    return 0;
}
