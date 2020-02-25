#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int b, k, even = 0, odd = 0, d;
    cin >> b >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> d;
        if(d == 0)
            continue;
        if(d%2)
            odd++;
        else
            even++;
    }
    if(b%2 == 0 && d%2)
        cout << "odd" << endl;
    else if(b%2 && odd%2)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
}
