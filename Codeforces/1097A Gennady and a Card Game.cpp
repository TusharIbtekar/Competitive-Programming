#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    int i;
    cin >> s;
    i = 5;
    while(i--)
    {
        cin >> ss;
        if(s[1] == ss[1] || s[0] == ss[0])
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}
