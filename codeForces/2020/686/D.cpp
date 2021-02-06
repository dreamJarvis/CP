#include <bits/stdc++.h>
using namespace std;

#define lli long long int

vector<lli> maxLenArr(lli n, int i){
    vector<lli> arr;
    lli prev = n%i;

    while(n && n%i == 0){
        prev = n;
        n = n/i;
        arr.push_back(i);
    }

    if(n != 0){
        arr[arr.size()-1] = prev;
    }

    return arr;
}

bool isPrime(lli n){
    if(n == 2)  return true;
    for(int i = 2; i < 10; i++)
        if(n%i == 0)
            return false;
    return true;
}

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc--){
        lli n;
        cin >> n;

        vector<lli> arr;
        int k = 0;
        if(isPrime(n)){
            k = 1;
            arr.push_back(n);
        }
        else{
            int maxK = 0;
            for(int i = 2; i < 10; i++){
                if(n%i == 0){
                    vector<lli> temp = maxLenArr(n, i);
                    if(temp.size() > maxK){
                        k = maxK;
                        maxK = temp.size();
                        arr = temp;
                    }
                }
            }
        }

        cout << arr.size() << endl;
        for(int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
