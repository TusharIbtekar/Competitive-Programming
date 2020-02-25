#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int n, cnt0 = 0, cnt1 = 0, i;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> c;
        if(c == '1')
            cnt1++;
        else
            cnt0++;
    }
    i = max(cnt1, cnt0) - min(cnt1, cnt0);
    cout << i;
}
