#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int i, sum = 0, f = 0, z = 0, e = 0, d;
        string s;
        cin >> s;
        for(i = 0; i < s.size(); i++)
        {
            d = s[i] - '0';
            if(s[i] == '0')
                z++;
            else if(d%2 == 0)
                e++;
            sum += d;
        }
        if(z && e && !(sum%3) || z > 1 && !(sum%3) || z == s.size())
            cout << "red" << endl;
        else
            cout << "cyan" << endl;
    }
}
