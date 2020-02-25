#include<bits/stdc++.h>
using namespace std;
vector<int>s;
void fact(int n)
{
    while(n%2 == 0)
    {
        n /= 2;
        s.emplace_back(2);
    }
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        while(n%i == 0)
        {
            n /= i;
            s.emplace_back(i);
            //cout << "HELL" << endl;
        }
    }
    if(n > 2)
        s.emplace_back(n);

}
int main()
{
    int n, t, i, a, b, c;
    cin >> t;
    while(t--)
    {
        s.clear();
        cin >> n;
        fact(n);
        //for(i = 0; i < s.size(); i++)
            //cout << s[i] << " ";
        if(s.size() < 2)
            cout << "NO" << endl;
        else
        {
            if(s[0] == s[1] && s.size() > 3)
                a = s[0], b = s[1]*s[2];
            else
                a = s[0], b = s[1];
            c = n/(a*b);
        //cout << a << " " << b << " " << c << endl;
            if(a != b && b != c && a != c && (a*b) != n)
                cout << "YES\n" << a << " " << b << " " << c << endl;
            else
                cout << "NO" << endl;
        }


    }
}
