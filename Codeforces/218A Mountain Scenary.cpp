#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i;
    cin >> n >> k;
    int ar[2*n+1];
    for(i = 1; i <= 2*n+1; i++)
    {
        cin >> ar[i];
    }
    ar[-1] = 0;
    for(i = 2; i <= 2*n + 1 && k != 0; i += 2)
    {
        if(ar[i-1] < ar[i]-1 && ar[i]-1 > ar[i+1])
        {
                ar[i]--;
                k--;
        }
    }
    //cout << k << endl;
    for(i = 1; i <= 2*n+1; i++)
        cout << ar[i] << " ";
}
