#include<bits/stdc++.h>
//#include<set>
using namespace std;
int main()
{
    set <char> s;
    char c;
    int cnt = 2;
    while (cin >> c)
    {
        s.insert(c);
        if(c == ',')
            cnt++;
        if(c == '}')
            break;
    }
    if(cnt > 2)
        cnt = 3;
    cout << s.size()-cnt;

}
