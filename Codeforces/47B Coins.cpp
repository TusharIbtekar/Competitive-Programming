#include<bits/stdc++.h>
using namespace std;
int ar[4];
int main()
{
    string s1, s2, s3, s = "";
    int i;
    //char s;
    cin >> s1 >> s2 >> s3;
    if(s1[1] == '>')
    {
        ar[s1[2]-'A']++;
    }
    else
    {
        ar[s1[0]-'A']++;
    }
    if(s2[1] == '>')
    {
        ar[s2[2]-'A']++;
    }
    else
    {
        ar[s2[0]-'A']++;
    }
    if(s3[1] == '>')
    {
        ar[s3[2]-'A']++;
    }
    else
    {
        ar[s3[0]-'A']++;
    }
    for(i = 0; i < 4; i++)
    {
        if(ar[i] >= 2)
        {
            ar[i] = -1;
            s += 'A'+i;
            //cout << s;
            break;
        }
    }
    for(i = 0; i < 4; i++)
    {
        if(ar[i] >= 1)
        {
            ar[i] = -1;
            s += 'A'+i;
            //cout << s;
            break;
        }
    }
    for(i = 0; i < 4; i++)
    {
        if(ar[i] >= 0)
        {
            s += 'A'+i;
            //cout << s;
            break;
        }
    }
    if(s.size() != 3)
        cout << "Impossible";
    else
        cout << s;
}
