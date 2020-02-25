#include<bits/stdc++.h>
using namespace std;
int pos[10005], ar[10005];
int main()
{
    int n, i, cost = 0, j;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        pos[i] = ar[i];
    }
    sort(ar, ar+n, greater<int>());
    for(i = 0; i < n; i++)
    {
        cost += ar[i]*i + 1;
    }
    cout << cost << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(ar[i] == pos[j])
            {
                cout << j+1 << " ";
                pos[j] = 0;
            }
        }
    }
}
