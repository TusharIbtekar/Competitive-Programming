#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, a;
    cin >> n >> m;
    int ar[n] = {0};
    for(i = 0; i < m; i++)
    {
        cin >> a;
        ar[a-1]++;
    }
    sort(ar, n+ar);
    for(i = 0; i < m; i++)

        {
            cout << ar[0]<<"\n";
            printf("%d", abs(m-n));
            break;
        }
}

