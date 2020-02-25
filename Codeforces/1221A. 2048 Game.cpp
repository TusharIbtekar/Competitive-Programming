#include<bits/stdc++.h>
using namespace std;
long long int ar[105];
int main()
{
    long long int n, mx = 0, flag = 0, i, rem = 0, t;
    cin >> t;
    while(t--)
    {
        mx = 0, flag = 0, rem = 0;
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar+n, greater<int>());
        for(i = 0; i < n; i++)
        {
            if(ar[i] == 2048)
            {
                flag = 1;
                break;
            }
            else if(ar[i] < 2048 && !mx)
                mx = ar[i];
            else if(mx)
                rem += ar[i];
        }
        if(rem >= mx && rem+mx >= 2048)
            flag = 1;
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
