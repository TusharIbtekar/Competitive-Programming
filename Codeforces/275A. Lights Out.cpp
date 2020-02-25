#include<bits/stdc++.h>
using namespace std;
int ans[4][4], in[4][4];
int main()
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> in[i][j];
            ans[i][j] = 1;
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            while(in[i][j]--)
            {
                //cout << in[i][j] << endl;
                if(ans[i][j] == 1)
                    ans[i][j] = 0;
                else
                    ans[i][j] = 1;

                if(ans[i][j+1] == 1 && j < 2)
                    ans[i][j+1] = 0;
                else if(ans[i][j+1] == 0 && j < 2)
                    ans[i][j+1] = 1;

                if(ans[i][j-1] == 1 && j >= 1)
                    ans[i][j-1] = 0;
                else if(ans[i][j-1] == 0 && j >= 1)
                    ans[i][j-1] = 1;

                if(ans[i+1][j] == 1 && i < 2)
                    ans[i+1][j] = 0;
                else if(ans[i+1][j] == 0 && i < 2)
                    ans[i+1][j] = 1;

                if(ans[i-1][j] == 1 && i >= 1)
                    ans[i-1][j] = 0;
                else if(ans[i-1][j] == 0 && i >= 1)
                    ans[i-1][j] = 1;

            }
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cout << ans[i][j];
        cout << endl;
    }
    /*for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << in[i][j];
        }
        cout << endl;
    }*/
}
