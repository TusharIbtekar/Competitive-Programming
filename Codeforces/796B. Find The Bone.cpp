#include<bits/stdc++.h>
using namespace std;
int chk[3000005];
vector< pair<int,int> > vec;
int main()
{
    int n, m, k, d, u, v, i, temp, mark = -1;
    scanf("%d%d%d", &n, &m, &k);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &d);
        chk[d]++;
    }
    for(i = 0; i < k; i++)
    {
        scanf("%d%d", &u, &v);
        if(u == 1 && mark == -1)
        {
            mark = i;
            temp = v;
        }
        else if(v == 1 && mark == -1)
        {
            mark = i;
            temp = u;
        }
        vec.push_back(make_pair(u, v));
    }
    //cout << mark << " " << temp << endl;
    if(chk[1])
    {
        printf("1\n"); return 0;
    }
    for(i = mark+1; i < k; i++)
    {
        if(chk[temp])
        {
            printf("%d\n", temp); return 0;
        }
        if(vec[i].first == temp)
        {
            temp = vec[i].second;
            //cout << i << " first source " << temp << endl;
        }
        else if(vec[i].second == temp)
        {
            temp = vec[i].first;
            //cout << i << " second source " << temp << endl;
        }
    }
    printf("%d\n", temp);
}
