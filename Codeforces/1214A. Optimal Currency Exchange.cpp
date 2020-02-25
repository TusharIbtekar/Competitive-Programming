#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int euro[] = {5, 10, 20 , 50, 100, 200}, dollar[] = {1, 2, 5, 10, 20, 50, 100}, ans = 999999999;
    int i, e, d, n, j;
    cin >> n >> d >> e;
    for(i = 0; i < 6; i++)
    {
        euro[i] *= e;
        if(n%euro[i] == 0)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    for(i = 0; i < 7; i++)
    {
        dollar[i] *= d;
        if(n%dollar[i] == 0)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    /*for(i = 0; i < 7; i++)
    {
        cout << "D = " << dollar[i] << " E = " << euro[i] << endl;
    }*/
    for(i = 0; i < 6; i++)
    {
        if(euro[i] > n)
        {
            if(i == 0)
                break;
            for(j = 0; j < 7; j++)
            {
                cout << "tyes" << endl;
                if(dollar[j] > n-euro[i-1])
                {
                    if(j == 0)
                    {
                        ans = n-euro[i-1];
                        break;
                    }
                    else
                    {
                        ans = n-euro[i-1]-dollar[j-1];
                        break;
                    }
                }
            }
            break;
        }
    }
    for(i = 0; i < 7; i++)
    {
        if(dollar[i] > n)
        {
            if(i == 0)
                break;
            for(j = 0; j < 6; j++)
            {
                if(euro[j] > n-dollar[i-1])
                {
                    if(j == 0)
                    {
                        ans = min((n-dollar[i-1]), ans);
                    }
                    else
                    {
                        ans = min((n-dollar[i-1]-euro[j-1]), ans);
                    }
                    cout << ans << endl;
                    return 0;
                }
            }
        }
    }
    cout << n << endl;
}
