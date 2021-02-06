#include <bits/stdc++.h>
using namespace std;

// Driver function
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int minEle = INT_MAX, maxEle = INT_MIN;
    int minIndex = 0, maxIndex = n - 1;
    for (int i = 0; i < n; i++) {
        if (minEle >= arr[i]) {
            minEle = arr[i];
            minIndex = i;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (maxEle <= arr[i]) {
            maxEle = arr[i];
            maxIndex = i;
        }
    }

    int totalSec = 0;
    if (minIndex > maxIndex) {
        totalSec = maxIndex + abs(n - minIndex - 1);
    }
    else {
        totalSec += maxIndex + abs(n - minIndex - 2);
    }

    cout << totalSec << endl;

    return 0;
}
