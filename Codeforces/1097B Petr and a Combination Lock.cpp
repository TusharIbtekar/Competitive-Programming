#include<bits/stdc++.h>
using namespace std;
int ar[50];
int main()
{
    int n, i, tot = 0, mxtot = 0, j = 0, sum = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    if(sum == 360)
    {
        printf("YES\n");
        return 0;
    }
    //sort(ar, ar+n);
    for(i = 0; i < n-1; i++)
    {
        tot = ar[i];
        if(tot == 0)
            continue;
        if(tot > 0)
        {
            for(j = i; j < n; j++)
            {
                if(ar[j] != 0)
                {
                    ar[j] = ar[j] - tot;
                    //cout << "if pos --" << ar[j] << endl;
                }
            }
        }
        else if(tot < 0)
        {
            for(j = i; j < n; j++)
            {
                if(ar[j] != 0)
                {
                    ar[j] = ar[j] + tot;
                    //cout << "if neg --" << ar[j] << endl;
                }
            }
        }
        //ar[i] = 0;
    }
    int flag = 0;
    for(i = 0; i < n; i++)
    {
        //cout << ar[i] << endl;
        if(ar[i] != 0)
        {
            flag = 1;
            //cout << ar[i] << endl;
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
}
