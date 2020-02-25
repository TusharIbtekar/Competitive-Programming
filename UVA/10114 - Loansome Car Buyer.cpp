#include<bits/stdc++.h>
using namespace std;
double ar[101];
int main()
{
    double dpay, cost, dep;
    int mnth, ndep, n;
    char c;
    while(1)
    {
        cin >> mnth >> dpay >> cost >> ndep;
        if(mnth < 0)
            break;
        while(ndep--)
        {
            cin >> n >> dep;
            ar[n] = dep;
        }
        for(int i = 1; i < 101; i++)
        {
            //cout << ar[i] <<endl;
            if(ar[i] == 0)
                ar[i] += ar[i-1];
        }
        double val, loan;
        int cnt = 0;
        loan = cost/mnth;
        val = cost + dpay;
        val -= val*ar[0];
        //cout << val << endl;
        while(val < cost)
        {
            cnt++;
            cost -= loan;
            val -= val*ar[cnt];
        //cout << loan << " " << val << endl;
        }
        cout << cnt << " month";
        if(cnt != 1)
            cout << "s";
        cout << endl;
        for(int i = 0; i < 101; i++)
            ar[i] = 0.0;
    }
}
