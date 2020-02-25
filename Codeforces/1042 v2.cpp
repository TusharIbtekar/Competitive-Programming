#include<bits/stdc++.h>
using namespace std;
long long int ar[50];
int main()
{
    string s;
    long long int i, n, t, cnt, cs = 0;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        s = "";
        cnt = 0;
        memset(ar, 0, sizeof(ar));
        long long int tot = 0, j = 0, rem;
        while(n)
        {
            if(n%2)
            {
                s += '1';
            }
            else
            {
                s += '0';
            }
            n /= 2;
        }
        s += '0';
        i = 0;
        j = 1;
        while(1)
        {
            if(s[i] == '1' && s[j] == '0')
                break;
            if(s[i] == '1')
                cnt++;
            i++;
            j++;
        }
        for(i = 0; i < cnt; i++)
            ar[i] = 1;
        ar[j] = 1;

        for(i = j+1; i < s.size(); i++)
        {
            rem = s[i]-48;
            //cout << rem << endl;
            ar[i] = rem;
        }
        //cout << "chek" << endl;
        //
        //for(i = 0; i < s.size()+2; i++)
            //cout << ar[i];

        for(i = 0; i <= s.size()+1; i++)
        {
            tot += pow(2LL, i)*ar[i];
        }
        printf("Case %lld: %lld\n", ++cs, tot);
    }
}
