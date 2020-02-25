#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, flag = 0, temp, j;
    cin >> n >> m;
    temp = sqrt(m);
    for(i = n+1; i <= m; i++){
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
            //cout << j << endl;
            if(j == i-1)
            {
                //cout << i << endl;
                flag = i;
                break;
            }
        }
        if(flag != 0)
            break;
    }
    //cout << flag << endl;
    if(flag == m)
        cout << "YES";
    else
        cout << "NO";
}
