#include<bits/stdc++.h>
using namespace std;
int ar[2005];
int even[2005];
int odd[2005];
int main()
{
    int ev = 0, od = 0, i, n, j, ans = 0;
    cin >> n;
    for(j = 0; j < n; j++)
    {
        cin >> i;
        if(i%2)
        {
            odd[od] = i;
            od++;
        }
        else
        {
            even[ev] = i;
            ev++;
        }
        ar[j] = i;
    }
    if(abs(od-ev) < 2)
        cout << 0 << endl;
    else
    {
        sort(ar, ar+n);
        sort(even, even+ev);
        sort(odd, odd+od);
        int tood = 0, toev = 0;
        if(ev < od)
        {
            for(j = 0; j < abs(od-ev)-1; j++)
            {
                tood += odd[j];
            }
            cout << tood << endl;
        }
        else
        {
            for(j = 0; j < abs(od-ev)-1; j++)
            {
                toev += even[j];
            }
            cout << toev << endl;
        }
    }
}
