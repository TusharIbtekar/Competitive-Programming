#include<bits/stdc++.h>
using namespace std;
int main()
{
    std :: ios_base :: sync_with_stdio(false);
    bitset < 10 > chk;
    string s;
    long long int n, k, i, cnt = 0;
    cin >> n >> k;
    while(n--)
    {
        int flag = 0;
        chk.reset();
        cin >> s;
        for(i = 0; i < s.size(); i++)
        {
            chk[s[i] - 48] = 1;
        }
        for(i = 0; i <= k; i++)
            if(chk[i] == 0)
            {
                flag = 1;
                break;
            }
        if(flag == 0)
            cnt++;
    }
    cout << cnt;
}
