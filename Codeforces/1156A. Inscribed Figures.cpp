#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[105];
    int i, n, inf = 0, cnt = 0;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> ar[i];
    for(i = 0; i < n-1; i++)
    {
        if(ar[i] == 2 && ar[i+1] == 3 || ar[i] == 3 && ar[i+1] == 2)
        {
            //cout << "HELL" << endl;
            inf = 1;
            break;
        }
        else
        {
            if(ar[i] == 1 || ar[i+1] == 1)
            {
                if(ar[i] == 2 || ar[i+1] == 2)
                    cnt += 3;
                else
                    cnt += 4;
            }
        }
    }
    if(inf)
    {
        cout << "Infinite" << endl;
    }
    else
    {
        for(i = 0; i < n-2; i++)
        {
            if(ar[i] == 3 && ar[i+1] == 1 && ar[i+2] == 2)
                cnt--;
        }
        cout << "Finite" << endl;
        cout << cnt << endl;
    }

}
