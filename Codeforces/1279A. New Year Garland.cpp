#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cl[3];
    cin >> t;
    while(t--)
    {
        cin >> cl[0] >> cl[1] >> cl[2];
        sort(cl, cl+3);
        if(cl[2]-1 <= cl[1]+cl[0])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
}
