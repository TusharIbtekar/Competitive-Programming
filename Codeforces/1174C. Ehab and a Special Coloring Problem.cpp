#include<bits/stdc++.h>
using namespace std;
int ar[100005];
int main()
{
    long long int i, n, j;
    cin >> n;
    int pre = 1;
    for(i = 2; i <= n; i++)
    {
        if(!ar[i])
        {
            ar[i] = pre;
            for(j = i; j <= n; j += i)
            {
                ar[j] = ar[i];
            }
            pre++;
        }
        cout << ar[i] << " ";
    }
}
