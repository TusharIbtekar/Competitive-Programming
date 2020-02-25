#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, a, b, n, flag = 0, dif, ar[100005], k = 0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        ar[k] = a;
        k++;
        if(b - a != 0)
        {
            cout << "rated";
            return 0;
        }
    }
    for(i = 0; i < k-1; i++)
        {
            cout << ar[i] << endl;
            if(ar[i] < ar[i+1])
                flag = 1;
        }
    if(flag)
        cout << "unrated";
    else
        cout << "maybe";
}
