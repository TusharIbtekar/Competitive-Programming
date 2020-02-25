#include<bits/stdc++.h>
using namespace std;
int ar[205];
vector<int>v;
int main()
{
    int q, n, i;
    cin >> q;
    while(q--)
    {
        cin >> n;
        for(i = 1; i <= n; i++)
            cin >> ar[i];
        int cnt = 0, temp;
        v.clear();
        for(i = 1; i <= n; i++)
        {
            temp = i;
            //cnt++;
            while(i != ar[temp])
            {
                temp = ar[temp];
                cnt++;
            }
            cnt++;
            v.emplace_back(cnt);
            cnt = 0;
        }
        for(i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
}
