#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    int i;
    cin >> s >> ss;
    if((s.size()-1 + ss.size())%2)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    int left = 0, right = 0, ind = 0;
    for(i = 0; s[i]!='|'; i++)
    {
        left++;
    }
    right = s.size()-left-1;
    int haf = (s.size()-1+ss.size())/2;
    while(haf!=left)
    {
        left++;
        s.insert(s.begin(), ss[ind]);
        ind++;
        if(ss.size() <= ind)
            break;
    }
    while(haf!=right)
    {
        right++;
        s += ss[ind];
        ind++;
        if(ss.size() <= ind)
            break;
    }
    if(left != right)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    cout << s << endl;
}
