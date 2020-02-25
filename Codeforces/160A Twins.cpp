#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ar[101], i, cnt = 0, sum = 0, sum1 = 0;
    cin >> n;
    for(i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum1 += ar[i];
        }
    sort(ar, ar+n);
    for(i = n-1; i >= 0; i--)
    {
        if(sum <= sum1)
            {
                sum += ar[i];
                cnt++;
                sum1 -= ar[i];
            }
        else
            break;
    }
    cout << cnt;
}
