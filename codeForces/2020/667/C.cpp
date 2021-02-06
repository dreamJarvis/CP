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

        vector<int> ans;
        for(int d = 1; d <= (y-x); ++d){
            if((y-x)%d != 0) continue;      // it means that we cant divide the array

            vector<int> res;
            bool foundx = false;
            int cur = y;
            int need = n;
            while(cur >= 1 && need > 0){
                res.push_back(cur);
                foundx |= cur == x;
                --need;
                cur -= d;
            }

            cur = y;
            while(need > 0){
                cur += d;
                res.push_back(cur);
                --need;
            }

            sort(res.begin(), res.end());
            if(need == 0 && foundx){
                if(ans.empty() || ans.back() > res.back()){
                    ans = res;
                }
            }
        }

        // 
        assert(!ans.empty());

        for(auto it:ans)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}
