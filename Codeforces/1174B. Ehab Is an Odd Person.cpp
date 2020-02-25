#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    int n, i, od = 0, ev = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i]&1)
            od++;
        else
            ev++;
    }
    if(od && ev)
    {
        sort(ar, ar+n);
    }
    for(i = 0; i < n; i++)
        cout << ar[i] << " ";
}
