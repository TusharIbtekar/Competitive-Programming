#include<bits/stdc++.h>
using namespace std;
int ar[100];
int main()
{
    int i, n, tot = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(i = 1; i < n-1; i++)
    {
        if(ar[i-1] == 1 && ar[i] == 0 && ar[i+1] == 1)
        {
            tot++;
            ar[i-1] = '*';
            ar[i] = '*';
            ar[i+1] = '*';
        }
    }
    cout << tot << endl;
}
