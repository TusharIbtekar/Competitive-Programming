#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, i;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int mins = 0, hrs = 0;
        hrs = 23-n;
        mins = 60-m;
        mins += hrs*60;
        cout << mins << endl;
    }
}
