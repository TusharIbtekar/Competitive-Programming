#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int sum = 0, n;
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(s[0] == 'T')
            sum += 4;
        else if(s[0] == 'C')
            sum += 6;
        else if(s[0] == 'O')
            sum += 8;
        else if(s[0] == 'D')
            sum += 12;
        else
            sum += 20;
    }
    cout << sum;
}
