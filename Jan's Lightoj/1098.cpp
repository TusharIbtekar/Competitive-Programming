#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, csod = 0, sod;
    cin >> n;
    sod = sqrt(n);
    for(i = 2; i <= sod; i++)
    {
        if(n % i == 0)
        {
            csod += i + n / i;
            cout << endl << i << " " << n/i << " ";
        }
    }
    cout << csod;
}
