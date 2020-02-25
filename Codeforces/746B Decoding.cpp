#include<bits/stdc++.h>
using namespace std;
char nw[2005];
int main()
{
    int n, k = 0;
    string s;
    cin >> n;
    cin >> s;
    if(n%2)
    {
        nw[n/2] = s[0];
        //cout << n/2;
        for(int i = n-1; i >= 1; i--)
        {
            if(i%2)
            {
                if(k == n/2)
                    k++;
                nw[k] = s[i];
                k++;
            }
        }
        for(int i = 1; i < n; i++)
        {
            if(i%2 == 0)
            {
                if(k == n/2)
                    k++;
                nw[k] = s[i];
                k++;
            }
        }

    }
    else
    {
        nw[n/2 - 1] = s[0];
        //cout << n/2;
        for(int i = n-1; i >= 1; i--)
        {
            if(i%2 == 0)
            {
                if(k == n/2 - 1)
                    k++;
                nw[k] = s[i];
                k++;
            }

        }
        for(int i = 1; i < n; i++)
        {
            if(i%2)
            {
                if(k == n/2 - 1)
                    k++;
                nw[k] = s[i];
                k++;
            }
        }
    }
    cout << nw;
}
