#include<iostream>
#include<string>
using namespace std;
int main()
{
    string t, c;
    int i, cnt = 0, k = 0;
    cin >> t >> c;
    for(i = 0; i < c.size(); i++)
    {
        if(t[k] == c[i])
        {
            cnt++;
            k++;
        }
    }
    cout << cnt+1;
}
