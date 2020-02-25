#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    int ar[10], i, n, mx, flag = 0;
    string a, s;
    cin >> n;
    cin >> a;
    for(i = 1; i < 10; i++)
    {
        cin >> ar[i];
    }
    for(i = 0; i < a.size(); i++)
    {
        if(a[i]-'0' < ar[a[i]-'0'])
        {
            a[i] = ar[a[i]-'0'] + '0';
            flag = 1;
        }
        else if(flag && a[i]-'0' > ar[a[i] - '0'])
        {
            break;
        }
    }
    cout << a << endl;

}
