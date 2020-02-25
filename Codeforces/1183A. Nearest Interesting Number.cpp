#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, i, n;
    cin >> n;
    int dummy;
    while(1)
    {
        s = 0;
        dummy = n;
        while(dummy)
        {
            s += dummy%10;
            dummy /= 10;
        }
        if(s%4 == 0)
            break;
        n++;
    }
    cout << n << endl;
}
