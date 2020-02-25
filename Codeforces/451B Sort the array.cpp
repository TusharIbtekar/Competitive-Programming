#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    int n, bp, ip, i, flag = 0, j, lest;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(i = 1; i < n; i++)
    {
        if(ar[i-1] > ar[i])
        {
            break;
        }
    }
    ip = i;
    for(; i < n; i++)
    {
        if(ar[i-1] < ar[i])
        {
            break;
        }
    }
    bp = i;
    lest = ar[ip-1];
    //cout << lest <<endl;
    for(j = ip-2; j >= 0; j--)
    {
        if(ar[bp-1] < ar[j])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    for(; i < n; i++)
    {
        if(ar[i-1] < ar[i] && ar[i] > lest)
            continue;
        else
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << ip << " " << bp << endl;
}
