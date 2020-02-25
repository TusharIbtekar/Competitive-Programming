#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, sup;
    cin >> s;
    if(s[0]-'0' > '9'-s[0] && '9'-s[0] > 0)
        s[0] = ('9'-s[0])+'0';
    for(i = 1; i < s.size(); i++)
    {
        sup = s[i]-'0';
        if(sup > 9-sup && 9-sup >= 0)
        {
            s[i] = (9-sup)+'0';
            //cout << s[i] << endl;
        }
    }
    cout << s << endl;
}

