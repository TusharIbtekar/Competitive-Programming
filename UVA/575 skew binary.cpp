#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    while(1)
    {
        long long int tot = 0, i;
        if(s[0]-'0' == 0)
            break;
        long long int j = 1;
        for(i = s.size()-1; i >= 0; i--)
        {

            tot += (s[i] - '0')*(pow(2, j)-1);
            //cout << tot << endl;
            //cout << s[i] - '0' << " " << pow(2, j) << endl;
            j++;
        }
        printf("%lld\n", tot);
        s = "";
        cin >> s;
    }
}
