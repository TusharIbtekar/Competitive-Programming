#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss, sss;
    int n, i, div, rem, j = 0, l;
    cin >> n;
    ss = "ROYG";
    sss = "BIV";
    s = "";
    //s += ss;
    for(i = 0; i < n-3; i++)
    {
        s += ss[j];
        j++;
        if(j == 4)
            j = 0;
    }
    l = s.size();
    for(i = 0; i < 3; i++)
    {
        s += sss[i];
        //cout << sss[i] << endl;
    }
    //s += sss;
    cout << s << endl;
}
