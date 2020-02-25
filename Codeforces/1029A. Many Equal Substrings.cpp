#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, sn;
    int n, k, i, j = 0, cnt = 0;
    cin >> n >> k;
    cin >> s;
    sn = s;
    for(i = 1; i < n; i++)
    {
        if(sn[i] == s[j])
            j++;
        else
            {
                i = i - j;
                j = 0;

            }
    }
    cout << s;
    k--;
    while(k--)
        for(i = j; i < n; i++)
            printf("%c", s[i]);



}
