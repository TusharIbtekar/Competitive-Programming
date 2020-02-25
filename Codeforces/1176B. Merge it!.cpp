#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, i, cnt = 0, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int ar[n+5];
        int c1 = 0, c2 = 0, rem = 0;
        cnt = 0;
        for(i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for(i = 0; i < n; i++)
        {
            if(ar[i]%3 == 0)
                cnt++;
            else if(ar[i] == 1)
                c1++;
            else if(ar[i] == 2)
                c2++;
            else
                rem++;
        }
        for(i = 0; i < n; i++)
        {
            if(ar[i]!=1 && ar[i]!=2 && ar[i]%3 == 2 && rem)
            {
                c1--;
                cnt++;
                rem--;
            }
            else if(ar[i]!=1 && ar[i]!=2 && ar[i]%3 == 1 && rem)
            {
                c2--;
                cnt++;
                rem--;
            }
        }
        if(c1 >= c2)
        {
            c1 -= c2;
            cnt += c2;
            c2 = 0;
        }
        else if(c1 < c2)
        {
            c2 -= c1;
            cnt += c1;
            c1 = 0;
        }
        if(c1)
        {
            cnt += c1/3;
        }
        if(c2)
        {
            c2 = c2*2;
            cnt += c2/6;
        }
        cout << cnt << endl;
    }
}
