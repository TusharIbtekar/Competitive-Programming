#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, m, r = 1, c = 1, i, j, cb = 0, flag = 0, posr, posc, k;
    cin >> n >> m;
    k = n;
    while(n--)
    {
        cin >> s;
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B')
            {
                cb++;
                if(flag == 0)
                {
                    posc = i+1;
                    posr = k - n;
                    flag = 1;
                }
            }

        }
        if(flag)
            break;
        cout << posc << " " << posr;
    }
    c = posc + cb/2;
    r = posr + cb/2;
    cout << r << " " << c;
}
