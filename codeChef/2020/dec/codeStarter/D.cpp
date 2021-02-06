#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FIO;

    ll tc, num;
    cin >> tc;

    while(tc--){
        cin >> num;

        ll evenSum = 0, oddSum = 0, temp = 0;
        while(num){
            temp = num%10;
            num /= 10;

            if(temp%2==0)
                evenSum += temp;
            else
                oddSum += temp;
        }

        if(evenSum%4 == 0 || oddSum%3 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
