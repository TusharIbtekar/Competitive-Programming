#include<bits/stdc++.h>
using namespace std;
//int ar[100005];
set<int> ar;
int main()
{
    int i, tot = 0, n, d, k, j = 1;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &d);
        if(d != 0)
            ar.insert(d);
    }
    set<int> :: iterator it;
    tot = *ar.begin();
    //ar.pop();
    cout << tot << endl;
    it = ar.begin();
    it++;
    for( ; it != ar.end() && j < k; it++, j++)
    {
        d = *it - tot;
        tot += d;
        printf("%d\n", d);
    }
    while(j < k)
    {
        cout << 0 << endl;
        j++;
    }
}
