#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3][3];
    int i, j, ans = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cin >> ar[i][j];
    }
    ar[2][2] = (ar[1][0]+ar[0][1])/2;
    ar[1][1] = (ar[0][1]+ar[2][1])/2;
    ar[0][0] = (ar[2][1]+ar[1][2])/2;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }
}
