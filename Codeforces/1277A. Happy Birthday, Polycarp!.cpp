#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, dec, rem, dig = 0, nw, dif = 1, agerta;
    cin >> t;
    while(t--)
    {
        cin >> n;
        dig = 0;
        dif = 1;
        dec = 0;
        agerta = 1;
        while(1)
        {
            if(agerta == n)
            {
                dig++;
                break;
            }
            if(agerta > n)
                break;
            agerta += dif;
            dig++;
            if(dig >= 9)
            {
                dif = dif*10+1;
                agerta = dif;
                dec += 9;
                dig = 0;
                //cout << dif << endl;
            }
        }
        cout << dig+dec << endl;
    }
}
