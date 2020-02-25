#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, a;
    cin >> n >> m;
    int ar[n] = {0};
    for(i = 0; i < m; i++)
    {
        cin >> a;
        ar[a]++;
    }
    sort(n, m+n);
    cout << ar[0];
}
