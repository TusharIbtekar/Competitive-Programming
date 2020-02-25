#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int i, n, t, cnt, cs = 0, flag;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        s = "";
        cnt = 0;
        flag = 0;
        int cnt0 = 0, tot = 0, j = 0;
        while(n)
        {
            if(n%2)
            {
                s += '1';
                cnt++;
            }
            else
            {
                s += '0';
                cnt0++;
            }
            n /= 2;
        }
        //s += '0';

        if(cnt == s.size())
        {
            s += '0';
            cnt0++;
        }
        //reverse(s.begin(), s.end());
        //cout << s << endl;
        for(i = 0; i < s.size()-1; i++)
        {
            if(s[i] == '1' && s[i+1] == '0')
            {
                swap(s[i], s[i+1]);
                cnt0--;
                flag = 1;
                //cout << 1;
                //if(cnt0 == 0)
                    break;
            }
        }
        if(!flag)
        {
            s += '0';
            cnt0++;
        }
        if(!flag && cnt != 1)
        {
            for(i = 0; i < s.size()-1; i++)
            {
                if(s[i] == '0' && s[i+1] == '1')
                {
                    swap(s[i], s[i+1]);
                    cnt0--;
                    //flag = 1;
                    //cout << 1;
                    if(cnt0 == 0)
                        break;
                }
            }
        }
        reverse(s.begin(), s.end());
        //cout << s << endl;
        //cout << pow(2, 4);
        for(i = s.size()-1; i >= 0; i--)
        {
            tot += pow(2LL, j)*(s[i] - '0');
            j++;
        }
        cout << tot << endl;
    }
}
