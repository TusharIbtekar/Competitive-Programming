#include<bits/stdc++.h>
using namespace std;
long long ar[10000];
double db[10000];
int main()
{
    long long n, l, d;
    cin >> n >> l;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    db[0] = ar[0];
    for(int i = 1; i < n; i++)
    {
        db[i] = (ar[i] - ar[i-1])/2.0;
        //cout << db[i] << " ";
    }
    db[n] = (l - ar[n-1])*1.0;
    //cout << db[n] << " ";
    sort(db, db+n+1);
    printf("%.10lf\n", db[n]);

}
