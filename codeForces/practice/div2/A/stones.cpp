#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string str;
    cin >> str;

    int count = 0;
    int i = 0;
    while(i < n-1){
        if(str[i] == str[i+1])
            count++;
        i++;
    }

    cout << count << endl;

    return 0;
}
