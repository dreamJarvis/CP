#include <iostream>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);   cout.tie(NULL);

ll gcd(ll x, ll y)
{
  if(y == 0)
      return x;
  else
      return gcd(y, x%y);
}

ll maxfact(ll g,ll n)
{
    ll max_factor=0;
    for(ll i = 1; i*i <= g; i++)
    {
        if(g % i == 0)
        {
            if(i <= n)
                max_factor = max(max_factor, i);
            if(g / i <= n)
                max_factor = max(max_factor, g / i);
        }
   }
   return max_factor;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    FIO;

    ll t;
    cin>>t;
    for(ll cases = 1; cases <= t; cases++){
        ll  n, m;
        cin >> n >> m;

        ll g = 0, temp;
        for(ll i = 0; i < m; i++){
            cin >> temp;
            g = gcd(g, temp);// __gcd(g,p[i]);
        }
        if(g>n)
        {
          ll factor = maxfact(g,n);
          g=factor;
        }
        cout << n - g << "\n";
    }
    return 0;
}
