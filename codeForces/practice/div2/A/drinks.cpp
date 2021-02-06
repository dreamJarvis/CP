#include <bits/stdc++.h>
using namespace std;

// Driver function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    float totalPercent = 0;
    for(int i = 0; i < n; i++)
        totalPercent += arr[i];

    totalPercent = (float)totalPercent/((float)100.00);
    totalPercent = (float)((float)totalPercent/n)*100.00;

    cout << fixed << setprecision(12) << totalPercent << endl;

    return 0;
}
