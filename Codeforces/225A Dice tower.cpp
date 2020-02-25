#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, a, b, i, flag = 0, hi, lo, ar[10] = {0};
    cin >> n >> x;
    cin >> a >> b;
    hi = x;
    lo = 7-hi;
    n--;
    while(n--)
    {
        cin >> a >> b;
        ar[a]++;
        ar[b]++;
        ar[7-a]++;
        ar[7-b]++;
        for(i = 1; i < 7; i++)
        {
            if(ar[hi] != 0 || ar[lo] != 0)
            {
                cout << "NO";
                return 0;
            }

        }
        memset(ar, 0, sizeof(ar));
    }
    cout << "YES";
}
