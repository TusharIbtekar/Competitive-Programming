#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
    long long int n, i;
    set <int> s;
    cin >> n;
    //s.insert(n);
    while(n > 9)
    {
        n++;
        while(n%10 == 0)
        {
            n /= 10;
        }
        s.insert(n);
        //cout << n << endl;
    }
    cout << 9+s.size() << endl;
}
