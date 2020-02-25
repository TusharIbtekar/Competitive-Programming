#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, tot = 0, i;
    cin >> n >> k;
    k = 240 - k;
    //cout << "k  " << k << endl;
    for(i = 1; i <= n; i++)
    {
        tot += 5*i;
        //cout << i << endl;
        if(tot > k)
        {
            i--;
            cout << i << endl;
            cout << acos(-1);
            return 0;
        }
    }
    i--;
    cout << i;
}
