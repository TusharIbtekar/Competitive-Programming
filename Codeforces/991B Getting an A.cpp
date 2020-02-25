#include<bits/stdc++.h>

using namespace std;

int main()
{
    double sum, n;
    int x, i, j = 0;
    cin>>n;
    x = n;
    int ar[x];
    for(i = 0; i < n; i++)
        {
             cin>> ar[i];
             sum += ar[i];
        }
    sort(ar, ar+x);
    while(sum/n < 4.5)
    {
        sum += 5-ar[j];
        j++;
    }
    cout<<j;

}
