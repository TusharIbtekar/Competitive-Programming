#include<bits/stdc++.h>
using namespace std;
int ar[150], i, n;
int main()
{

    string s;
    cin >> n;
    cin >> s;
    for(i = 0; i < n; i++)
    {
        if(s[i] > 64 && s[i] < 97)
            ar[s[i] - 'A']++;
        else
            ar[s[i] - 'a']++;
    }
    for(i = 0; i < 26; i++)
        if(ar[i] == 0)
        {
            //cout << i;
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
}
