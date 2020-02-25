#include<bits/stdc++.h>
using namespace std;
int chk[27];
int main()
{
    int n, i, j;
    scanf("%d", &n);
    while(n--)
    {
        int flag = 0;
        string s, ss;
        cin >> s >> ss;
        for(i = 0; i < s.size(); i++)
            chk[s[i]-'a']++;
        for(i = 0; i < s.size(); i++)
        {
            flag = 0;
            for(j = i; j < ss.size(); j++)
            {
                if(s[i] == ss[j])
                {
                    flag = 1;
                    break;
                }
                ss[j] = '*';
            }
            if(!flag)
            {
                break;
            }
        }
        for(i = 0; i < ss.size(); i++)
        {
            if(chk[ss[i]-'a'])
            {
                chk[ss[i]-'a']--;
            }
            else
                flag = 0;
        }
        if(!flag)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
