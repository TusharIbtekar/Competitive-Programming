#include<bits/stdc++.h>
using namespace std;
long long int ar[200005];
int main()
{
    long long int n, dif, c1 = 0, c2 = 0, i, j;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    dif = ar[n-1] - ar[0];
    for(i = 0; i < n; i++)
    {
        if(ar[i] == ar[0])
            c1++;
        if(ar[i] == ar[n-1])
            c2++;
    }
    if(ar[n-1] == ar[0])
        cout << dif << " " << n*(n-1)/2 << endl;

    else
        cout << dif << " " << c1*c2 << endl;
}
