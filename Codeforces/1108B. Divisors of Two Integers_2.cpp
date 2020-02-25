#include<bits/stdc++.h>
using namespace std;
vector<long long>vec;
long long int ar[2000], chk[200005]; //FUCK xD
int main()
{
    long long int i, j, n, flag = 0, x, y, f = 0, l;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
        chk[ar[i]]++;
        if(chk[ar[i]] > 1)
        {
            vec.push_back(ar[i]);
            f = 1;
        }
    }
    sort(ar, ar+n);
    x = ar[n-1];
    for(i = 0; i < n; i++)
    {
        if(x % ar[i])
        {
            vec.push_back(ar[i]);
            flag = 1;
        }
    }
    sort(vec.begin(), vec.end());
    y = vec[vec.size()-1];

    cout << x << " " << y;

}
