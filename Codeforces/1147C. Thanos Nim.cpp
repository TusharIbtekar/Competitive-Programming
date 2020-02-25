#include<bits/stdc++.h>
using namespace std;
int ar[100];
int main()
{
    int n, i, cnt = 0;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >>ar[i];
    sort(ar, ar+n);
    for(i = 1; i < n; i++)
    {
        if(ar[i] == ar[0])
            cnt++;
    }
    if(cnt >= n/2)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
}
