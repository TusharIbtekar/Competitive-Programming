#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    int ar[27], cnt = 0, cpy, individ = 0;
    memset(ar, 0, sizeof(ar));
    cin >> n;
    cpy = n;
    while(n--)
    {
        string s;
        cin >> s;
        ar[s[0] - 'a']++;
    }
    for(i = 0; i < 27; i++)
    {
        if(ar[i] > 2)
            cnt += ar[i];
        if(ar[i] == 1)
            individ += ar[i];
    }
    //cout << cnt << endl;
    if(cnt == cpy)
        cout << cnt-1 << endl;
    else if(cnt > individ)
     cout << ceil(ceil((cpy-individ)/2)/2) << endl;
    else
        cout << cnt/2;
}
