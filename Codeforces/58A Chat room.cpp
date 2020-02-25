#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, h;
    h = "hello";
    int i, flag = 0, j = 0;
    cin >> s;
    for(i = 0; i < s.size(); i++)
    {
        if(h[j] == s[i])
            j++;
    }

    if(j == 5)
        cout << "YES";
    else
        cout << "NO";
}
