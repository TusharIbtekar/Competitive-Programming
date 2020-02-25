#include<bits/stdc++.h>
using namespace std;
int koybar[1005];
bool connected[101][101];
int main()
{
    int i, j, n, m, a, b;
    cin >> n >> m;
    for(i = 0; i < m; i++)
    {
        cin >> a >> b;
        koybar[a]++;
        koybar[b]++;
        connected[a][b] = 1;
        connected[b][a] = 1;
    }
    bool ase = 1;
    int cnt = 0;
    deque<int>dq;
    while(ase)
    {
        ase = 0;
        for(i = 1; i <= n; i++)
        {
            if(koybar[i] == 1)
            {
                ase = 1;
                dq.push_back(i);
                koybar[i]--;
            }
        }
        while(!dq.empty())
        {
            int ma_src = dq.front();
            dq.pop_front();
            for(i = 1; i <= n; i++)
            {
                if(connected[ma_src][i] && koybar[i])
                {
                    koybar[i]--;
                    //cout << i << endl;
                }
            }
        }
        if(ase)
            cnt++;
    }
    cout << cnt << endl;
}
