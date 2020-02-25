#include<bits/stdc++.h>
using namespace std;
int ar[2000005];
int main()
{
    string s;
    char ch;
    int n, k, i, j, cnt = 0;
    scanf("%d %d", &n, &k);
    cin >> s;
    j = 0;
    ch = s[0];
    cnt++;
    if(cnt == k)
    {
        //cout << s[i] << " ";
        ar[ch-'a']++;
        cnt = 0;
        //j++;
    }
    for(i = 1; i < s.size(); i++)
    {
        if(ch == s[i])
        {
            cnt++;
            if(cnt == k)
            {
                //cout << s[i] << " ";
                ar[s[i]-'a']++;
                //j++;
                cnt = 0;
            }
        }
        else
        {
            cnt = 1;
            //cout << ch << endl;
        }
        ch = s[i];
    }
    j = 26;
    /*for(i = 0; i < j; i++)
        cout << ar[i] << " ";*/
    sort(ar, ar+j, greater<int>());
    cout << ar[0] << endl;



}
