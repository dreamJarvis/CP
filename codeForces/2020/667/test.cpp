#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        int n, x, y;
        cin >> n >> x >> y;

        int diff = abs(y-x);

        int si = 0, ei = 0, add = 0;
        int minPoss = INT_MAX;

        if(n == 2){
            cout << x << " " << y << endl;
            continue;
        }

        bool flag = false;
        for(int i = 1; i <= 10; i++){
            int d = diff/i+1;

            if(diff%i==0 && diff/i < n){
                if(d == n){
                    if(ei < minPoss){
                        flag = true;
                        si = x; ei = y; add = i;
                        minPoss = ei;
                    }
                }
                else if(d < n){
                    int t = d;
                    int remDist = n-t;
                    int distLeft = x/i;
                    int s, e;

                    if(distLeft >= remDist){
                        if(distLeft == remDist){
                            e = y;
                            s = x%i;
                            if(s == 0){
                                s += i;
                                e += i;
                            }
                        }
                        else{
                            s = x - remDist*i;
                            e = y;
                        }
                    }
                    else{
                        s = x%i;
                        e = y + i*(remDist-distLeft);

                        if(s == 0){
                            s += i;
                            e += i;
                        }
                    }

                    if(e < minPoss){
                        flag = true;
                        si = s;
                        ei = e;
                        add = i;
                        minPoss = ei;
                    }
                }
            }
        }

        assert(ei==0);

        // ei = min(ei, minPoss);
        for(int i = si; i <= ei; i+=add)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
