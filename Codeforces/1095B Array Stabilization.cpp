#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    int n, mx, i;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar+n);
    mx = min(ar[n-2]-ar[0], ar[n-1] - ar[1]);
    printf("%d\n", mx);
}
