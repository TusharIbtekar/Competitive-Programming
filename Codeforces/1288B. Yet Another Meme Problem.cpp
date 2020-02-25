#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, dig, ans = 0, rem, cnt = 0;
    cin >> t;
    while(t--)
    {
        ans = 0;
        dig = 0;
        cnt = 0;
        cin >> a >> b;
        if(b > 8)
        {
            ans = a;
            while(b)
            {
                rem = b%10;
                b /= 10;
                dig++;
                if(rem == 9)
                    cnt++;
            }
            if(rem < 9)
                dig--;
            else if(dig != cnt)
                dig--;
        }
        ans *= dig;
        cout << ans << endl;

    }
}
