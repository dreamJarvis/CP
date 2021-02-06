#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

// Drive function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int B[] = {5, 2, 3, 4, 5};
    // int N = sizeof(B)/sizeof(B[0]);
    int B[] = {4, 4, 4, 4};
    int N = sizeof(B)/sizeof(B[0]);

    unordered_map<int, vector<int>> grpLcm;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> index;
    int A[N];
    for(int i = 0; i < N; i++){
        A[i]  = 2+i;

        if(B[i]-1 != i){
            index[i] = true;
            index[B[i]-1] = true;
            visited[A[i]] = true;
            grpLcm[B[i]-1].push_back(i);
        }
    }

    for(auto i:grpLcm){
        int k = i.first;
        vector<int> l = i.second;

        if(l.size() == 1){
            A[k] = A[l[0]]*2;
        }
        else{
            int temp = 1;
            for(auto j:l)
                temp = lcm(temp, A[j]);
            A[k] = temp;
        }
        visited[A[k]] = true;
    }

    for(int i = 0; i < N; i++){
        if(!index[i]){
            int num = 2;
            while(visited[num]) num++;
            A[i] = num;
            visited[num] = true;
        }
    }

    // output
    for(int i = 0; i < N; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}
