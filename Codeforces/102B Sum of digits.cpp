#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, cnt = 1, tot = 0, div, to = 0, koto = 0;
    cin >> s;
    for(i = 0; i < s.size(); i++)
    {
        tot += s[i] - '0';
        koto++;
    }
    //cout << tot;
    /*while(tot)
        {
            to += tot%10;
            tot /= 10;
            cout << tot << endl;
        }
    cout << to << endl;*/
    if(tot == 1 && koto != 1)
    {
        cout << cnt << endl;
        return 0;
    }
    if(koto == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    while(1)
    {
        koto = 0;
        to = 0;
        while(tot)
        {
            to += tot%10;
            tot /= 10;
            koto++;
            //cout << tot << endl;
        }
        tot = to;
        //cout << to << endl;
        if(koto == 1)
            break;
        cnt++;

    }

    cout << cnt << endl;
}
