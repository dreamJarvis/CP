#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		while (k % 2 == 0)
		{
			k /= 2;
		}
		vector<int> a(n);
		int flag = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] % k != 0 )
				flag = 1;
		}

		if (flag == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}