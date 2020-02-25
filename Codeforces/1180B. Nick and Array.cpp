#include <bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    int i, n, mn = 9999999;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >>ar[i];
        if(ar[i] >=0)
        {
            ar[i] = -ar[i]-1;
        }
        mn=min(mn, ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(n&1)
        {
            if(ar[i] == mn)
            {
                ar[i] = -ar[i]-1;
                break;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        cout << ar[i] << " ";
    }
	return 0;
}
