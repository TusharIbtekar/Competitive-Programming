#include<bits/stdc++.h>
using namespace std;
deque<int>v[500005];
int ar[500005];
int main()
{
    int n, i, j, cnt = 0, k = 0;
    int good[7] = {4, 8, 15, 16, 23, 42};
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        v[ar[i]].emplace_back(i);
    }
    int flag = 1, temp;
    for(i = 0;;i++)
    {
        temp = v[4].front();
        v[4].pop_front();
        for(j = 1; j < 6; j++)
        {
            if(v[good[])
        }
    }

}
