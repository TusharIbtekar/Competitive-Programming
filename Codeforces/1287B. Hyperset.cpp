#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> s, temp;
    int n, k, i, ek = 0, j, ans = 0;
    string in;
    cin >> n >> k;
    for(i = 0; i < n; i++)
    {
        cin >> in;
        sort(in.begin(), in.end());
        s.push_back(in);
        temp.push_back(in);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(temp[i] == temp[j] && temp[i] != "*")
            {
                ek++;
                temp[j] = "*";
                if(ek == 3)
                    ans++;
            }
        }
    }
    cout << ans << endl;
    ans += ((n-ek)*(n-ek-1)/6);
    cout << ans << endl;
}
/*10 3
sst
ees
ess
ess
sst
ett
eet
ess
est
est*/
