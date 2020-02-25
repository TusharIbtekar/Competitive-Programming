#include<bits/stdc++.h>
using namespace std;
int ar[10005];
int main()
{
    int n, i, t, mn = 99999999, cost = 0, j;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> ar[i];
    for(i = 1; i <= 100; i++)
    {
        cost = 0;
        for(j = 0; j < n; j++)
        {
            if(ar[j] > i)
                cost += ar[j]-i-1;
            else if(ar[j] < i)
                cost += i-ar[j]-1;
        }
        if(cost < mn)
        {
            mn = cost;
            t = i;
        }
    }
    cout << t << " " << mn;
}
