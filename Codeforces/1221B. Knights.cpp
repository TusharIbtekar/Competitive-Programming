#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i%2)
            {
                if(j%2)
                    cout << 'W';
                else
                    cout << 'B';
            }
            else
            {
                if(j%2)
                    cout << 'B';
                else
                    cout << 'W';
            }
        }
        cout << endl;
    }
}
