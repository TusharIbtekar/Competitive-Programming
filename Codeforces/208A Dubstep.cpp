#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, st;
    int i, flag = 1, k = 0;
    cin >> s;
    for(i = 0; i < s.size(); i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
            {
                s[i] = 0;
                s[i+1] = 0;
                s[i+2] = 0;
                if(flag == 0)
                    {
                        st += " ";
                        flag = 1;
                    }
            }
        else if(s[i] != 0)
            {
                st += s[i];
                //k++;
                flag = 0;
            }
    }
    cout << st;
}
