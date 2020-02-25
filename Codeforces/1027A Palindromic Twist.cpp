#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n, temp, j, flag = 0;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        flag = 0;
        for(i = 0, j = n-1; i <= n/2; i++, j--)
        {
            if(abs(s[i] - s[j]) == 0 || abs(s[i] - s[j]) == 2)
                //cout << abs(s[i] - s[j]) << endl;
                continue;
            flag = 1;

        }
        if(flag == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
