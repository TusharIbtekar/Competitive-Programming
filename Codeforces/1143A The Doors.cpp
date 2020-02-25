#include<bits/stdc++.h>
using namespace std;
int ar[200005];
int main()
{
    int n, d, i, c1 = 0, c0 = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i])
            c1++;
        else
            c0++;
    }
    for(i = 0; i < n; i++)
    {
        if(ar[i])
            c1--;
        else
            c0--;
        if(!c1 || !c0)
            break;
    }
    cout << i+1;
}
