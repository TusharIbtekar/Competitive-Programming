#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int>mp;
    string str;
    int i, n, mil = 0;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> str;
        mp[str]++;
    }
    for(i = 0; i < n; i++)
    {
        cin >> str;
        if(mp[str])
        {
            mil++;
            mp[str]--;
        }
    }
    cout << n - mil << endl;
}
